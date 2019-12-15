#include "hipVectors.h"
#include <benchmark/benchmark.h>
#include <hip/hip_runtime.h>

static void hipFloat4BenchAdd(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float4 a;
        benchFloat4Add(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat4BenchAdd);

static void hipFloat4BenchMul(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float4 a;
        benchFloat4Mul(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat4BenchMul);

static void hipFloat4BenchDiv(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float4 a;
        benchFloat4Add(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat4BenchDiv);

static void hipFloat4BenchSub(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float4 a;
        benchFloat4Mul(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(hipFloat4BenchSub);

static void benchFloat4Swaps(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        float4 a;
        benchFloat4Swaps(a, 300, 100);
    }
}
// Register the function as a benchmark
BENCHMARK(benchFloat4Swaps);