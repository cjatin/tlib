#include "hipVectors.h"
#include <benchmark/benchmark.h>
#include <hip/hip_runtime.h>

static void hipFloat3BenchAdd(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float3 a;
        benchFloat3Add(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat3BenchAdd);

static void hipFloat3BenchMul(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float3 a;
        benchFloat3Mul(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat3BenchMul);

static void hipFloat3BenchDiv(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float3 a;
        benchFloat3Add(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat3BenchDiv);

static void hipFloat3BenchSub(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float3 a;
        benchFloat3Mul(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat3BenchSub);

static void benchFloat3Swaps(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float3 a;
        benchFloat3Swaps(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(benchFloat3Swaps);