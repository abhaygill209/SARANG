#!/bin/bash
set -e

echo "NTT_engine's Functional Verification"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

export PYTHONPATH="$REPO_ROOT/Algo:$PYTHONPATH"

make -C "$SCRIPT_DIR" -f makefile "$@"
