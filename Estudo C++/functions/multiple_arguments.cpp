#include <iostream>



void name_x_times(std::string name, int x = 0) {
  while(x > 0) {
    std::cout << name << '\n';
    x--;
  }
}

int main() {
  
  std::string my_name = "shdw";
  int some_number = 5; //
  
  name_x_times(my_name, some_number);
  
}