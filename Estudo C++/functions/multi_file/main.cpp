#include <iostream>
#include <cmath>

// compile them like this: 
// g++ main.cpp my_functions.cpp -o result

// Add declarations here:
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

int main() {
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
}