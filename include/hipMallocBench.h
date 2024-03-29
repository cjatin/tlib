#ifndef HIP_MALLOC_BENCHMARK_H
#define HIP_MALLOC_BENCHMARK_H

#include <hip/hip_runtime.h>


void hipMallocBench100(void* a);
void hipMallocBenchCopyD2H(void* a);
void hipMallocBenchCopyH2D(void* a);
void hipDeviceF2A(void*);
void hipDeviceF3A(void*);
void hipDeviceF4A(void*);

#endif
