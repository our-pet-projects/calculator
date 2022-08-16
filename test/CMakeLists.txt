add_executable(test_main test_main.cpp test.cpp test2.cpp)
target_compile_features(test_main PRIVATE cxx_std_17)
doctest_discover_tests(test_main)
