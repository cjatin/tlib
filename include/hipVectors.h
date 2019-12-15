#ifndef HIP_VECTORS_BENCHMARK_H
#define HIP_VECTORS_BENCHMARK_H
#include <hip/hip_runtime.h>

void benchFloat2Add(float2&, int, int);
void benchFloat2Mul(float2&, int, int);
void benchFloat2Div(float2&, int, int);
void benchFloat2Sub(float2&, int, int);

void benchFloat3Add(float3&, int, int);
void benchFloat3Mul(float3&, int, int);
void benchFloat3Div(float3&, int, int);
void benchFloat3Sub(float3&, int, int);

void benchFloat4Add(float4&, int, int);
void benchFloat4Mul(float4&, int, int);
void benchFloat4Div(float4&, int, int);
void benchFloat4Sub(float4&, int, int);

void benchFloat2Swaps(float2&, int, int);
void benchFloat3Swaps(float3&, int, int);
void benchFloat4Swaps(float4&, int, int);

#endif
