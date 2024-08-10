#include <iostream>

void get_emergency_number(std::string emergency_number) {
  std::cout << "Dial " << emergency_number;
}


int main() {
  
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // calling function with parameter
  get_emergency_number(new_emergency_number);
  
}