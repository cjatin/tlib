#include "hipMallocBench.h"
#include <benchmark/benchmark.h>
#include <hip/hip_runtime.h>

static void hipMallocAndFree(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        void* a;
        hipMallocBench100(a);
    }
}
// Register the function as a benchmark
BENCHMARK(hipMallocAndFree);

static void hipMallocAndCopyH2D(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        void* a;
        hipMallocBenchCopyH2D(a);
    }
}
// Register the function as a benchmark
BENCHMARK(hipMallocAndCopyH2D);

static void hipMallocAndCopyD2H(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        void* a;
        hipMallocBenchCopyD2H(a);
    }
}
// Register the function as a benchmark
BENCHMARK(hipMallocAndCopyD2H);

static void hipF2Add(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        void* a;
        hipDeviceF2A(a);
    }
}
// Register the function as a benchmark
BENCHMARK(hipF2Add);

static void hipF3Add(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        void* a;
        hipDeviceF3A(a);
    }
}
// Register the function as a benchmark
BENCHMARK(hipF3Add);

static void hipF4Add(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        void* a;
        hipDeviceF4A(a);
    }
}
// Register the function as a benchmark
BENCHMARK(hipF4Add);
