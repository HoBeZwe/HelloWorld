
#include <iostream>

#include "doStuff/do.h"

/**
    @brief The main function

    @param argc
    @param argv

    @return 1 for failure, 0 for success
*/
int main(int argc, char **argv) {
  for (int i = 1; i < argc; i++) {
    std::cout << argv[2] << '\n';
  }

  return doStuff();
}
