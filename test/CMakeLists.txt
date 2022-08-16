include(doctest)


include(CTest)
enable_testing()

add_executable(test_main test_main.cpp test.cpp test2.cpp)
target_compile_features(test_main PRIVATE cxx_std_17)

# add_executable(test1 test.cpp $<TARGET_OBJECTS:test_main>)
# target_compile_features(test1 PRIVATE cxx_std_17)
# add_test(NAME test1 COMMAND test1)

# add_executable(test2 test2.cpp $<TARGET_OBJECTS:test_main>)
# target_compile_features(test2 PRIVATE cxx_std_17)
# add_test(NAME test2 COMMAND test2)


# file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/test/*.cpp)
# add_executable(unit-tests ${SOURCE_FILES})
# target_include_directories(unit-tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
# target_link_libraries(unit-tests ${CONAN_LIBS})
# target_compile_features(unit-tests PRIVATE cxx_std_17)

# add_test(NAME unit-tests COMMAND unit-tests)
doctest_discover_tests(test_main)
