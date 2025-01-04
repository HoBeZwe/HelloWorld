
#include <iostream>
#include <string>
#include <unordered_map>

#ifdef _OPENMP
#include <omp.h>
#endif

const int ver10 = 199810;
const int ver20 = 200203;
const int ver25 = 200505;
const int ver30 = 200805;
const int ver31 = 201107;
const int ver40 = 201307;
const int ver45 = 201511;
const int ver50 = 201811;
const int ver51 = 202011;
const int ver52 = 202111;
const int ver60 = 202411;

int main(int argc, char **argv) {
  int aux = 2;
  aux += 2;

  // --------------------------- Hello world
  std::cout << ++aux << " Hello world!" << '\n' << '\n';

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
      {ver10, "1.0"}, {ver20, "2.0"}, {ver25, "2.5"}, {ver30, "3.0"},
      {ver31, "3.1"}, {ver40, "4.0"}, {ver45, "4.5"}, {ver50, "5.0"},
      {ver51, "5.1"}, {ver52, "5.2"}, {ver60, "6.0"}};
  std::cout << '\n' << "We have OpenMP " << map.at(_OPENMP) << '\n';
#endif

  return 0;
}
