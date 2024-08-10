#include <iostream>
#include <vector>

int main()
{

    /*
    Write a program to find the sum of even numbers and the product of odd numbers in a vector.

    For example:

    Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

    Then the program should output:

    Sum of even numbers is 12
    Product of odd numbers is 27
    */

    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

    int even = 0;
    int odd_product = 1; // começamos com 1, pois 1 é o elemento neutro da multiplicação

    for (int i = 0; i < numbers.size(); i++) {
        // numeros pares
        if (numbers[i] % 2 == 0)
            even += numbers[i];

        // produto dos numeros ímpares
        if (numbers[i] % 2 != 0)
            odd_product *= numbers[i];
    }

    std::cout << "Sum of even numbers is " << even << "\n";
    std::cout << "Product of odd numbers is " << odd_product;
}