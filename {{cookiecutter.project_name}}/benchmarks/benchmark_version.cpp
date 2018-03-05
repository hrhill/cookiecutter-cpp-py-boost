#include <benchmark/benchmark.h>

static void BM_version(benchmark::State& state)
{
    for (auto _ : state)
        std::string version;
}

// Registed the function
BENCHMARK(BM_version);

BENCHMARK_MAIN();
