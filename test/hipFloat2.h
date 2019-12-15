#include "hipVectors.h"
#include <benchmark/benchmark.h>
#include <hip/hip_runtime.h>

static void hipFloat2BenchAdd(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    float2 a;
    benchFloat2Add(a, 300, 100);
  }
}
// Register the function as a benchmark
BENCHMARK(hipFloat2BenchAdd);

static void hipFloat2BenchMul(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    float2 a;
    benchFloat2Mul(a, 300, 100);
  }
}
// Register the function as a benchmark
BENCHMARK(hipFloat2BenchMul);
