#include "hipMallocBench.h"

template <typename T>
__global__ void fnadd(T* a, T* b) {
    *a = *a + *b;
}

void hipMallocBench100(void* a) {
    hipMalloc(&a, 400);
    hipFree(a);
}

void hipMallocBenchCopyH2D(void* a) {
    int* h_a = new int[400];
    hipMalloc(&a, 400);
    hipMemcpy(a, h_a, 400, hipMemcpyHostToDevice);
    hipFree(a);
    delete[] h_a;
}

void hipMallocBenchCopyD2H(void* a) {
    int* h_a = new int[400];
    hipMalloc(&a, 400);
    hipMemcpy(a, h_a, 400, hipMemcpyDeviceToHost);
    hipFree(a);
    delete[] h_a;
}

void hipDeviceF2A(void* aa) {
    aa = new float2;
    float2* a = (float2*)aa;
    float2* d_a;
    a->x = a->y = 2.12;
    hipMalloc(&d_a, sizeof(float2));
    hipMemcpy(d_a, a, sizeof(float2), hipMemcpyHostToDevice);
    auto f2k = fnadd<float2>;
    hipLaunchKernelGGL(f2k, 1, 1, 0, 0, d_a, d_a);
    hipMemcpy(a, d_a, sizeof(float2), hipMemcpyDeviceToHost);
    hipFree(d_a);
}
