
# ---------------------------------------------------------- Minimum required CMake version
cmake_minimum_required (VERSION 3.20 FATAL_ERROR)


# ---------------------------------------------------------- Fix name of the project and supported languages
project ("Say_Hello" LANGUAGES C CXX)


# ---------------------------------------------------------- Fix C++ standard for all targets
set(CMAKE_CXX_STANDARD 20)				# The standard to be used
set(CMAKE_CXX_STANDARD_REQUIRED ON)		# Enforce the chosen standard
set(CMAKE_CXX_EXTENSIONS ON)			# Allow compiler specific extensions to the standard


# ---------------------------------------------------------- Add source directory
add_subdirectory (src)



# ---------------------------------------------------------- Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/7d76a231b0e29caf86e68d1df858308cd53b2a66.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)
enable_testing()

add_subdirectory(test)





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