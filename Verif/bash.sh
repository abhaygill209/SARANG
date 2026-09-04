#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

TARGET="${1:-all}"

case "$TARGET" in
  butterfly|ButterflyUnitCT)
    echo "Running ButterflyUnitCT verification..."
    "$SCRIPT_DIR/ButterflyUnitCT/bash.sh" "${@:2}"
    ;;
  delay|DelayUnit)
    echo "Running DelayUnit verification..."
    "$SCRIPT_DIR/DelayUnit/bash.sh" "${@:2}"
    ;;
  ntt|NTT_engine|NTTEngine)
    echo "Running NTT_engine verification..."
    "$SCRIPT_DIR/NTT_engine/bash.sh" "${@:2}"
    ;;
  all|--all)
    echo "=========================================================="
    echo " Running All Verification Suites in PQC_ASIC/Verif"
    echo "=========================================================="
    echo ""
    echo "[1/3] Running ButterflyUnitCT Verification..."
    "$SCRIPT_DIR/ButterflyUnitCT/bash.sh"
    echo ""
    echo "[2/3] Running DelayUnit Verification (Stages 1..8)..."
    "$SCRIPT_DIR/DelayUnit/bash.sh" all
    echo ""
    echo "[3/3] Running NTT_engine Verification..."
    "$SCRIPT_DIR/NTT_engine/bash.sh"
    echo ""
    echo "=========================================================="
    echo " All Verification Suites Passed Successfully!"
    echo "=========================================================="
    ;;
  *)
    echo "Usage: $0 [all | butterfly | delay | ntt] [options]"
    exit 1
    ;;
esac
