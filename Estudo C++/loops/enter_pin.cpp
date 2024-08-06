#include <iostream>

int main() {
  
  int pin = 0;
  int tries = 0;
  
  std::cout << "BANK OF CODECADEMY\n";
  
  while (pin != 1234 && tries < 3) {
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
  }

  if (pin == 1234) {
    std::cout << "\n\nPIN accepted!\n";
    std::cout << "You now have access.\n\n"; 
  } else {
    std::cout << "\n\nAccess Denied!\n";
    std::cout << "You have exceeded the maximum attempts limit.\n\n"; 
  }
  
  return 0;
}
