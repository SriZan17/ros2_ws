# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-src"
  "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-build"
  "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-subbuild/abseil-cpp-populate-prefix"
  "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-subbuild/abseil-cpp-populate-prefix/tmp"
  "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-subbuild/abseil-cpp-populate-prefix/src/abseil-cpp-populate-stamp"
  "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-subbuild/abseil-cpp-populate-prefix/src"
  "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-subbuild/abseil-cpp-populate-prefix/src/abseil-cpp-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-subbuild/abseil-cpp-populate-prefix/src/abseil-cpp-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/srjn/ros2_ws/build/px4/_deps/abseil-cpp-subbuild/abseil-cpp-populate-prefix/src/abseil-cpp-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
