#include "hipMallocBench.h"

void hipMallocBench100(void* a) {
    hipMalloc(&a,400);
    hipFree(a);
}

void hipMallocBenchCopyH2D(void* a) {
    int *h_a = new int[400];
    hipMalloc(&a,400);
    hipMemcpy(a, h_a, 400, hipMemcpyHostToDevice); 
    hipFree(a);
    delete[] h_a;
}

void hipMallocBenchCopyD2H(void* a) {
    int *h_a = new int[400];
    hipMalloc(&a,400);
    hipMemcpy(a, h_a, 400, hipMemcpyDeviceToHost); 
    hipFree(a);
    delete[] h_a;
}
