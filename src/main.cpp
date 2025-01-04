
#include "/home/bernd/Nextcloud/Wissenschaft/Forschung/Codes_NFFFT/HelloWorld/src/main.h"

#include <iostream>
#include <string>
#include <unordered_map>

#ifdef _OPENMP
#include <omp.h>
#endif

int main(int argc, char **argv) {
  int a = 2;
  a += 2;
  int x = 0;

  // --------------------------- Hello world
  std::cout << ++a << " Hello world!" << '\n' << '\n';

  for (int i = 1; i < argc; i++) {
    std::cout << argv[2] << '\n';
  }

#if defined(__INTEL_LLVM_COMPILER)
  std::cout << "Compiler: Intel Compiler" << __INTEL_LLVM_COMPILER << std::endl;
#elif defined(__clang__)
  std::cout << "Compiler: " << __VERSION__ << '\n';
#elif defined(__GNUC__)
  std::cout << "Compiler: GCC " << __VERSION__ << std::endl;
#else
  std::cout << "Compiler unknown." << std::endl;
#endif

  // --------------------------- Test OpenMP
#ifdef _OPENMP
  std::unordered_map<unsigned, std::string> map{
      {199810, "1.0"}, {200203, "2.0"}, {200505, "2.5"}, {200805, "3.0"},
      {201107, "3.1"}, {201307, "4.0"}, {201511, "4.5"}, {201811, "5.0"},
      {202011, "5.1"}, {202111, "5.2"}, {202411, "6.0"}};
  std::cout << std::endl << "We have OpenMP " << map.at(_OPENMP) << std::endl;
#endif

  return 0;
}
