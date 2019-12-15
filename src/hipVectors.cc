#include "hipVectors.h"

void benchFloat4Add(float4& a, int size, int get) {
    float4 f1[size];
    float4 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] += f2[i];
    }

    a = f1[get];
}

void benchFloat4Mul(float4& a, int size, int get) {
    float4 f1[size];
    float4 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] *= f2[i];
    }

    a = f1[get];
}

void benchFloat4Div(float4& a, int size, int get) {
    float4 f1[size];
    float4 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] /= f2[i];
    }

    a = f1[get];
}

void benchFloat4Sub(float4& a, int size, int get) {
    float4 f1[size];
    float4 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] -= f2[i];
    }

    a = f1[get];
}

void benchFloat3Add(float3& a, int size, int get) {
    float3 f1[size];
    float3 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] += f2[i];
    }

    a = f1[get];
}

void benchFloat3Mul(float3& a, int size, int get) {
    float3 f1[size];
    float3 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] *= f2[i];
    }

    a = f1[get];
}

void benchFloat3Div(float3& a, int size, int get) {
    float3 f1[size];
    float3 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] /= f2[i];
    }

    a = f1[get];
}

void benchFloat3Sub(float3& a, int size, int get) {
    float3 f1[size];
    float3 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] -= f2[i];
    }

    a = f1[get];
}

void benchFloat2Add(float2& a, int size, int get) {
    float2 f1[size];
    float2 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] += f2[i];
    }

    a = f1[get];
}

void benchFloat2Mul(float2& a, int size, int get) {
    float2 f1[size];
    float2 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] *= f2[i];
    }

    a = f1[get];
}

void benchFloat2Div(float2& a, int size, int get) {
    float2 f1[size];
    float2 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] /= f2[i];
    }

    a = f1[get];
}

void benchFloat2Sub(float2& a, int size, int get) {
    float2 f1[size];
    float2 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i] -= f2[i];
    }

    a = f1[get];
}

void benchFloat2Swaps(float2& a, int size, int get) {
    float2 f1[size];
    float2 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i].x = f2[i].y;
        f1[i].y = f2[i].x;
    }

    a = f1[get];
}

void benchFloat3Swaps(float3& a, int size, int get) {
    float3 f1[size];
    float3 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i].x = f2[i].y;
        f1[i].y = f2[i].z;
        f1[i].z = f2[i].x;
    }

    a = f1[get];
}

void benchFloat4Swaps(float4& a, int size, int get) {
    float4 f1[size];
    float4 f2[size];

    for (int i = 0; i < size; i++) {
        f1[i].x = f2[i].y;
        f1[i].y = f2[i].z;
        f1[i].z = f2[i].w;
        f1[i].w = f2[i].x;
    }

    a = f1[get];
}