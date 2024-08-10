#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string input = "turpentine and turtles";

  for(int i = 0; i < input.size(); i++) {
    std::cout << input[i] << "\n";
  }

}