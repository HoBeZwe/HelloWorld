
add_executable (hello_test "")

target_sources (hello_test
  PRIVATE
    test.cpp
  )

target_link_libraries(hello_test
  PRIVATE
    DoStuff
    GTest::gtest_main
  )

target_include_directories (hello_test
  PUBLIC 
    ../src
  )

include(GoogleTest)
gtest_discover_tests(hello_test)