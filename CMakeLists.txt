
# ---------------------------------------------------------- Minimum required CMake version
cmake_minimum_required (VERSION 3.20 FATAL_ERROR)


# ---------------------------------------------------------- Fix name of the project and supported languages
project ("Say_Hello" LANGUAGES C CXX)


# ---------------------------------------------------------- Add source directory
add_subdirectory (src)


message(STATUS "Current PATH value: $ENV{PATH}")

# ---------------------------------------------------------- Search for MKL
#SET(MKL_ROOT "$ENV{ICPP_COMPILER}\\mkl")
#find_package(MKL)
#find_package(OpenMP) # Check if OpenMP is available


#if(MKL_FOUND)
#
#	message(STATUS "Intel MKL is used.")
#	nclude_directories(${MKL_INCLUDE_DIRS})
#
#else()
#
#	message(STATUS "Intel MKL shall be used but is NOT found!")
#
#endif()