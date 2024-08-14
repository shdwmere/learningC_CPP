#include <iostream>
#include <chrono>
#include "night.hpp"

int main() {
  
  // Measure time taken for goodnight1():

  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
  
  std::cout << goodnight1("tulip"); // much more faster bcs it was declared as inline function at header `night.hpp`, so its like pasting the function right here when called
  
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";

  start = std::chrono::high_resolution_clock::now();

  // Measure time taken for goodnight2():

  std::cout << goodnight2("eraser", "ivy");

  end = std::chrono::high_resolution_clock::now();
  time_span = end - start;

  std::cout << "Time taken for goodnight2(): " << time_span.count() << " milliseconds.\n\n";

}