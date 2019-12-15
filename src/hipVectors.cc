#include "hipVectors.h"

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
