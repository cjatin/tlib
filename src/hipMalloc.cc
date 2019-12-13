#include "hipMallocBench.h"

void hipMallocBench100(void* a) {
    hipMalloc(&a,400);
    hipFree(a);
}
