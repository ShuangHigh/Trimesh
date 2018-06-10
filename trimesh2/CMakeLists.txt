cmake_minimum_required(VERSION 2.8)

project(test_trimesh)

find_package(OpenMP REQUIRED)
if(OPENMP_FOUND)
message("OPENMP FOUND")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()

include_directories("/home/gaoshuang/software/trimesh2/include")

#link_libraries("/home/gaoshuang/work/lianxi/test_trimesh/lib.Linux64/libgluit.a" "/home/gaoshuang/work/lianxi/test_trimesh/lib.Linux64/libtrimesh.a")
link_directories("/home/gaoshuang/software/trimesh2/lib.Linux64")
add_executable(test_trimesh main.cpp)
target_link_libraries(test_trimesh gluit trimesh)