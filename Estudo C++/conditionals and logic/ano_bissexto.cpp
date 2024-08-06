#include <iostream>

/*
• Lógica de bissexto:
Ele é divisível por 4 e não é divisível por 100, ou ele é divisível por 400.
*/
int main() {
  
  int year;
  std::cout << "Digite o ano: ";
  std::cin >> year;
  
  // Verificar se o ano eh um ano de quatro dígitos.
  if (year >= 1000 && year <= 9999) {
    // Verificar se eh um ano bissexto
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " eh um ano bissexto.\n";
    } else {
            std::cout << year << " nao eh um ano bissexto pois nao eh igualmente divisivel por 4.\n";
        }     
  } else {
        std::cout << year << " Ano invalido. Insira um ano de 4 digitos.\n";
  }

  return 0;

}