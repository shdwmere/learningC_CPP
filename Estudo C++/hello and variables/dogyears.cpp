#include <iostream>


int main() {
  
  double humanAge;
  double dogAge;

  std::cout << "Digite a idade do cachorro: \n";
  std::cin >> dogAge;

  if (dogAge > 2) {
    humanAge = 21 + (dogAge - 2) * 4;
  }
  else {
    // Para cachorros com 2 anos ou menos
    humanAge = dogAge * 10.5;
  }

  std::cout << "A idade do cachorro em anos humanos é de: " << humanAge << " anos.\n";

  return 0;

}