#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

export PYTHONPATH="$REPO_ROOT/Algo:$SCRIPT_DIR:$PYTHONPATH"

# Default stage and depth mapping
get_default_depth() {
  local stage=$1
  case $stage in
    1) echo 6 ;;
    2) echo 8 ;;
    3) echo 14 ;;
    4) echo 26 ;;
    5) echo 50 ;;
    6) echo 98 ;;
    7) echo 194 ;;
    8) echo 386 ;;
    *) echo $(( 2**(stage+1) + 4 )) ;;
  esac
}

# Compute log2(N) - 1
get_max_stages() {
  local n=${1:-256}
  python3 -c "import math; print(int(math.log2($n)) - 1 if $n > 1 else 1)"
}

echo "=========================================================="
echo " Delay Unit (NTT Engine Commutator) Functional Verification"
echo "=========================================================="

if [[ "$1" == "all" || "$1" == "--all" ]]; then
  shift
  # Extract N if passed as argument (e.g. ./bash.sh all N=256), default 256
  N_VAL=256
  for arg in "$@"; do
    if [[ "$arg" =~ ^N=([0-9]+)$ ]]; then
      N_VAL="${BASH_REMATCH[1]}"
    fi
  done
  max_st=$(get_max_stages "$N_VAL")
  echo "[INFO] Running full sweep for N=$N_VAL across Delay Unit stages 1 to $max_st (log2(N)-1)..."
  for ((st=1; st<=max_st; st++)); do
    dp=$(get_default_depth "$st")
    echo ""
    echo "----------------------------------------------------------"
    echo ">>> Running Simulation for STAGE=$st (DEPTH=$dp, N=$N_VAL)"
    echo "----------------------------------------------------------"
    make -C "$SCRIPT_DIR" -f makefile clean sim STAGE="$st" DEPTH="$dp" N="$N_VAL" "$@"
  done
  echo ""
  echo "=========================================================="
  echo " [SUCCESS] All stages (1..$max_st) passed successfully for N=$N_VAL!"
  echo "=========================================================="
elif [[ "$1" =~ ^[0-9]+$ ]]; then
  # Positional stage argument provided, e.g. ./bash.sh 2
  st=$1
  dp=$(get_default_depth "$st")
  shift
  echo "[INFO] Running Simulation for STAGE=$st (DEPTH=$dp)"
  make -C "$SCRIPT_DIR" -f makefile clean sim STAGE="$st" DEPTH="$dp" "$@"
else
  # Default or make-style arguments (e.g. ./bash.sh STAGE=2 DEPTH=16)
  make -C "$SCRIPT_DIR" -f makefile "$@"
fi
