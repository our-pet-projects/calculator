cmake_minimum_required(VERSION 3.23)
project(calc VERSION 0.1.0)


include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

enable_testing()
add_subdirectory(test)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
