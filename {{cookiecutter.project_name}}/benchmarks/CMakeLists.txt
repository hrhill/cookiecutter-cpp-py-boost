find_package(benchmark)

set(BENCHMARKS benchmark_version)

foreach(bench ${BENCHMARKS})
    add_executable(${bench} ${bench}.cpp)
    target_link_libraries(${bench} benchmark::benchmark)
endforeach(bench)

