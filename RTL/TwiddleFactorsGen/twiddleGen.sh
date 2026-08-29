#!/bin/bash

echo "Generating Twiddle Factors"

export PYTHONPATH=$PYTHONPATH:/home/abhay/OpenSource/PolyMulAcc/Codes_0.1/Algo
export PYTHONPATH=$PYTHONPATH:/home/abhay/OpenSource/PolyMulAcc/Codes_0.1/Architecture

python3 twiddle_factor_generator.py