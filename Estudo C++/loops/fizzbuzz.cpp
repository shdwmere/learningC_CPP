#include <iostream>
    
    // Se o resto da divisão de `i` por 3 for igual a 0, entao `i` é um multiplo de 3
    // Se o resto da divisão de `i` por 5 for igual a 0 ou 5, entao `i` é um multiplo de 5

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            std::cout << "Fizzbuzz!\n";
        else if (i % 5 == 0)
            std::cout << "Buzz!\n";
        else if (i % 3 == 0)
            std::cout << "Fizz!\n";
        else
            std::cout << i << "\n";
    }
}