#ifndef HIP_VECTORS_BENCHMARK_H
#define HIP_VECTORS_BENCHMARK_H
#include <hip/hip_runtime.h>

void benchFloat2Add(float2&, int, int);
void benchFloat2Mul(float2&, int, int);

#endif
