#include "hipMallocBench.h"
#include <benchmark/benchmark.h>
#include <hip/hip_runtime.h>

static void hipMallocAndFree(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    void *a;
    hipMallocBench100(a);
  }
}
// Register the function as a benchmark
BENCHMARK(hipMallocAndFree);
