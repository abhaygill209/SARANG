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

echo "=========================================================="
echo " Delay Unit (NTT Engine Commutator) Functional Verification"
echo "=========================================================="

if [[ "$1" == "all" || "$1" == "--all" ]]; then
  shift
  echo "[INFO] Running full sweep across NTT stages 1 to 8..."
  for st in {1..8}; do
    dp=$(get_default_depth "$st")
    echo ""
    echo "----------------------------------------------------------"
    echo ">>> Running Simulation for STAGE=$st (DEPTH=$dp)"
    echo "----------------------------------------------------------"
    make -C "$SCRIPT_DIR" -f makefile clean sim STAGE="$st" DEPTH="$dp" "$@"
  done
  echo ""
  echo "=========================================================="
  echo " [SUCCESS] All stages (1..8) passed successfully!"
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
