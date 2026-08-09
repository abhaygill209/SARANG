# PQC-Enabled Secure Communication SoC

## Overview

This project aims to design and implement a **Post-Quantum Cryptography (PQC) enabled System-on-Chip (SoC)** capable of establishing secure end-to-end communication using **TLS 1.3** with NIST-standardized post-quantum algorithms.

Unlike standalone cryptographic accelerators, the objective is to build a complete secure communication platform where hardware accelerators seamlessly integrate with a software TLS stack. The system demonstrates how PQC can be deployed in practical wireless or embedded systems while maintaining high performance through hardware acceleration.

---

# Objectives

- Develop an end-to-end PQC communication system.
- Implement TLS 1.3 with post-quantum cryptographic algorithms.
- Design hardware accelerators for computationally intensive PQC operations.
- Integrate hardware and software through a clean driver interface.
- Evaluate latency, throughput, power, and hardware utilization.

---

# System Architecture

```
                         Application
                              │
                     Secure Communication
                              │
                        TLS 1.3 Stack
                     (Software on CPU)
                              │
                Cryptographic Driver / HAL
                              │
       ------------------------------------------------
       │              │             │                │
    ML-KEM        ML-DSA       AES-GCM        SHA-256
       │
       │
-------------------------------------------------------------
|               Hardware Cryptographic Engine                |
|----------------------------------------------------------- |
| NTT Accelerator                                            |
| Inverse NTT                                                |
| Polynomial Arithmetic Unit                                 |
| Montgomery Reduction                                       |
| Barrett Reduction                                          |
| SHAKE128 / SHAKE256 Accelerator                            |
| Random Number Generator                                    |
| DMA                                                        |
| Secure Key Storage                                         |
-------------------------------------------------------------
                              │
                        Memory Subsystem
```

---

# Project Roadmap

## Phase 1 — Software Implementation

### Goals

- Implement PQC algorithms completely in software.
- Understand protocol flow.
- Validate correctness.

### Tasks

- Implement ML-KEM
- Implement ML-DSA
- Run NIST Known Answer Tests
- Benchmark software execution

---

## Phase 2 — TLS 1.3 Integration

### Goals

Integrate PQC algorithms into a complete communication stack.

### Tasks

- Implement TLS 1.3
- Replace ECDHE with ML-KEM
- Replace ECDSA with ML-DSA
- Verify secure communication

Communication Flow

```
Client
   │
ClientHello
   │
ServerHello
   │
ML-KEM Key Exchange
   │
Shared Secret
   │
Finished
   │
Encrypted Communication
```

---

## Phase 3 — Performance Profiling

Identify computational bottlenecks.

Typical hotspots include

- NTT
- Inverse NTT
- SHAKE
- Polynomial Multiplication
- Sampling
- Modular Reduction

---

## Phase 4 — Hardware Acceleration

### 1. NTT Accelerator

Responsible for

- Forward NTT
- Inverse NTT
- Butterfly Operations
- Point-wise Multiplication
- Bit Reversal

Expected Improvement

- O(N²) → O(N log N)

---

### 2. Polynomial Arithmetic Unit

Implements

- Polynomial Addition
- Polynomial Subtraction
- Modular Multiplication

---

### 3. Montgomery Reduction Engine

Responsible for

- Fast Modular Reduction
- Montgomery Multiplication

---

### 4. Barrett Reduction Engine

Responsible for

- Efficient Modular Reduction

---

### 5. SHAKE Accelerator

Implements

- SHAKE128
- SHAKE256
- Keccak-f[1600]

Operations

- Absorb
- Permute
- Squeeze

---

### 6. Random Number Generator

Implements

- TRNG
- DRBG

Used for

- Key Generation
- Noise Sampling
- Nonces

---

### 7. Secure Key Storage

Features

- Protected SRAM
- Key Isolation
- Zeroization
- Access Control

---

### 8. DMA Engine

Accelerates movement of

- Polynomials
- Ciphertexts
- Keys
- Intermediate Buffers

without CPU intervention.

---

# Hardware–Software Partitioning

| Component | Hardware | Software |
|-----------|----------|----------|
| TLS Protocol | ❌ | ✅ |
| TCP/IP Stack | ❌ | ✅ |
| Certificate Parsing | ❌ | ✅ |
| Session Management | ❌ | ✅ |
| ML-KEM | ✅ | Driver |
| ML-DSA | ✅ | Driver |
| NTT | ✅ | ❌ |
| Inverse NTT | ✅ | ❌ |
| SHAKE | ✅ | ❌ |
| AES-GCM | Optional | Optional |
| Random Number Generator | ✅ | ❌ |
| Key Storage | ✅ | ❌ |
| DMA | ✅ | ❌ |

---

# Software Stack

```
Application
      │
TLS 1.3
      │
Crypto Library
      │
Driver
      │
Hardware Abstraction Layer
      │
Memory-Mapped Registers
      │
Hardware Accelerators
```

---

# Hardware Architecture

```
                    RISC-V Processor
                           │
                      AXI Interconnect
                           │
 ---------------------------------------------------------
 |        |          |          |          |             |
NTT     SHAKE     AES-GCM     TRNG      DMA      Key Store
Engine   Engine     Engine
   │
Polynomial Arithmetic Unit
   │
Montgomery Reduction
   │
Barrett Reduction
```

---

# Driver Operation

Typical accelerator invocation

```
CPU

↓

Write Input Buffers

↓

Configure Registers

↓

Start Accelerator

↓

Hardware Executes

↓

Interrupt

↓

CPU Reads Output

↓

Continue TLS Handshake
```

---

# Proposed Hardware Modules

- NTT Accelerator
- Inverse NTT Accelerator
- Butterfly Processing Unit
- Montgomery Reduction Unit
- Barrett Reduction Unit
- Polynomial Arithmetic Unit
- SHAKE Accelerator
- Random Number Generator
- Secure Key Storage
- DMA Controller

---

# Development Milestones

## Milestone 1

- Software ML-KEM
- Software ML-DSA

---

## Milestone 2

- TLS 1.3 Integration
- Successful PQC Handshake

---

## Milestone 3

- Profiling
- Identify Performance Bottlenecks

---

## Milestone 4

- NTT Accelerator

---

## Milestone 5

- SHAKE Accelerator

---

## Milestone 6

- Polynomial Arithmetic Unit

---

## Milestone 7

- DMA Integration

---

## Milestone 8

- Secure Key Storage

---

## Milestone 9

- End-to-End FPGA Demonstration

---

## Milestone 10

- ASIC Implementation (Future Work)

---

# Evaluation Metrics

The system will be evaluated using

- TLS Handshake Latency
- Throughput
- CPU Utilization
- Area
- Frequency
- Power Consumption
- Energy per Handshake
- Accelerator Speedup
- Resource Utilization
- End-to-End Communication Latency

---

# Future Enhancements

- Hybrid Classical + PQC TLS
- Support for Additional PQC Algorithms
- Hardware Scheduler for Multiple Accelerators
- Secure Boot
- Trusted Execution Environment (TEE)
- Side-Channel Resistant Implementations
- FPGA Prototype
- ASIC Tapeout

---

# Technologies

## Hardware

- Verilog / SystemVerilog
- AXI4
- DMA
- FPGA
- ASIC Design Flow

## Software

- C/C++
- RISC-V
- OpenSSL / Open Quantum Safe (OQS)
- TLS 1.3
- FreeRTOS / Embedded Linux (optional)

---

# Expected Outcome

The final system will demonstrate a complete PQC-enabled secure communication platform in which:

- TLS 1.3 runs on a RISC-V based SoC.
- ML-KEM is used for post-quantum key establishment.
- ML-DSA is used for authentication.
- Computationally intensive lattice operations are accelerated using dedicated hardware.
- The software stack orchestrates protocol execution while hardware accelerates cryptographic primitives.
- The platform serves as a reference architecture for future post-quantum secure embedded and wireless systems.