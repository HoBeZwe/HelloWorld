add_executable(
    hello_test
    ""
    )

target_sources(
    hello_test
    PRIVATE test.cpp
    )

target_link_libraries(
    hello_test
    PRIVATE DoStuff
            GTest::gtest_main
    )

target_include_directories(
    hello_test
    PUBLIC ../src
    )

# target_compile_options( hello_test PUBLIC -O0 -g -fprofile-arcs -ftest-coverage )

# target_link_options( hello_test PUBLIC -fprofile-arcs -ftest-coverage )

include(GoogleTest)
gtest_discover_tests(hello_test)
