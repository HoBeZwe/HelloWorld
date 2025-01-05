
#include <iostream>

#include "doStuff/do.h"

int main(int argc, char **argv) {
  for (int i = 1; i < argc; i++) {
    std::cout << argv[2] << '\n';
  }

  return doStuff();
}
