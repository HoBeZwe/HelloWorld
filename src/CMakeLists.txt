# --------------------
# Set up the executable
add_executable(
    HelloExe
    ""
    )

# --- Set up libraries
add_subdirectory(doStuff)

# --- Add source files to the exe
target_sources(
    HelloExe
    PRIVATE main.cpp
    )

target_link_libraries(
    HelloExe
    PRIVATE DoStuff
    )
