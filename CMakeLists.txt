# ---------------------------------------------------------- Minimum required CMake version
cmake_minimum_required(
    VERSION 3.20
    FATAL_ERROR
    )

# ---------------------------------------------------------- Fix name of the project and supported languages
project(
    "Say_Hello"
    LANGUAGES C
              CXX
    )

# ---------------------------------------------------------- Fix C++ standard for all targets
set(
    CMAKE_CXX_STANDARD
    20
    ) # The standard to be used
set(
    CMAKE_CXX_STANDARD_REQUIRED
    ON
    ) # Enforce the chosen standard
set(
    CMAKE_CXX_EXTENSIONS
    ON
    ) # Allow compiler specific extensions to the standard

# ---------------------------------------------------------- Add source directory
add_subdirectory(src)

# ---------------------------------------------------------- Google Test
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
    )

set(
    gtest_force_shared_crt
    ON
    CACHE BOOL
          ""
          FORCE
    ) # For Windows: Prevent overriding the parent project's compiler/linker settings

FetchContent_MakeAvailable(googletest)

include(CTest)
include(GoogleTest)
enable_testing()

add_subdirectory(test)
