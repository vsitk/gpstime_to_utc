cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(gpstime_to_utc
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(CMAKE_BUILD_TYPE Release) # Debug, Release, RelWithDebInfo
# Note: 'Debug' causes segfault in boost::math::lanczos::lanczos17m64::lanczos_sum

add_executable(gpstime_to_utc src/gpstime_to_utc.cpp src/time_conversion.h)
# target_link_libraries(transform_example)
