#include <iostream>
#include "coffee.hpp"

// Remove any unnecessary false arguments from each function call in main().

int main() {
  
  // coffee black
  std::cout << make_coffee();
  
  // coffee with milk
  std::cout << make_coffee(true);
  
  // coffee with milk and sugar
  std::cout << make_coffee(true, true);
  
  // coffee with sugar
  std::cout << make_coffee(false, true);
  
}