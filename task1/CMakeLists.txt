cmake_minimum_required(VERSION 3.10)

project(number)

set(CMAKE_CXX_STANDARD 11)


set(SOURCE_EXE src/main.cpp)
set(SOURCE_LIB src/number.cpp)


add_library(number STATIC ${SOURCE_LIB})


add_executable(main ${SOURCE_EXE})


find_package(glog REQUIRED)
if (glog_FOUND)
    message(STATUS "glog found: ${glog_LIBRARIES}")
    include_directories(${glog_INCLUDE_DIRS})
 
 
    target_link_libraries(main /usr/lib/x86_64-linux-gnu/libglog.so number)
else()
    message(FATAL_ERROR "glog not found")
endif()


message(STATUS "glog include dirs: ${glog_INCLUDE_DIRS}")
message(STATUS "glog libraries: ${glog_LIBRARIES}")


