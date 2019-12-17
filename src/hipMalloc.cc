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
    float2 t;
    aa = (float2*)&(t);
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

void hipDeviceF3A(void* aa) {
    float3 t;
    aa = (float3*)&(t);
    float3* a = (float3*)aa;
    float3* d_a;
    a->x = a->y = 2.12;
    hipMalloc(&d_a, sizeof(float3));
    hipMemcpy(d_a, a, sizeof(float3), hipMemcpyHostToDevice);
    auto f2k = fnadd<float3>;
    hipLaunchKernelGGL(f2k, 1, 1, 0, 0, d_a, d_a);
    hipMemcpy(a, d_a, sizeof(float3), hipMemcpyDeviceToHost);
    hipFree(d_a);
}

void hipDeviceF4A(void* aa) {
    float4 t;
    aa = (float4*)&(t);
    float4* a = (float4*)aa;
    float4* d_a;
    a->x = a->y = 2.12;
    hipMalloc(&d_a, sizeof(float4));
    hipMemcpy(d_a, a, sizeof(float4), hipMemcpyHostToDevice);
    auto f2k = fnadd<float4>;
    hipLaunchKernelGGL(f2k, 1, 1, 0, 0, d_a, d_a);
    hipMemcpy(a, d_a, sizeof(float4), hipMemcpyDeviceToHost);
    hipFree(d_a);
}