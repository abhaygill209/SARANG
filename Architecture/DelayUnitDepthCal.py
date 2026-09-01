## stage one buffer filler 2 - 2
# stage 2 buffer filler 4 - 4
# stage 3 buffer filler 8 - 8 
import numpy as np

N = 256

NTTstages= int(np.log2(N))

buffer_lengths = (np.zeros(NTTstages))

for stage in range(1,NTTstages):
    buffer_1 = 0
    buffer_2 = 0
    count    = 0
    state    = 0
    reads    = 0
    max_buffer_1 = buffer_1
    max_buffer_2 = buffer_2

    while(count < N):
        buffer_1 += 2**stage - reads
        buffer_2 += 2**stage - reads
        count    += 2**(stage + 1)
        
        if (state == 2):
            reads = 2**(stage) 

        elif (state == 1 and stage < 2):
            state = 2

        elif (state == 1 and stage >= 2):
            reads = 2**(stage)
            state     = 2
    
        # logic for reduction of stage
        elif (state == 0 and stage <= 2):
            state = 1

        elif (state == 0 and stage > 2):
            reads = 2**(stage - 1) - 2
            state = 1
        max_buffer_1 = max(max_buffer_1, buffer_1)

    buffer_lengths[stage-1] = max_buffer_1
    

print("Buffer Lengths", buffer_lengths)