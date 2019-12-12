#include "tlib.h"
#include <benchmark/benchmark.h>

static void vecAdd_5(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    std::vector<int> a = {1, 2, 3, 4, 5};
    auto b = a;
    std::vector<int> c;
    vecAdd(a, b, c);
  }
}
// Register the function as a benchmark
BENCHMARK(vecAdd_5);
