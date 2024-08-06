#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;
    double root1;
    double root2;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    // Com discriminant para validar as raízes reais.
    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        
        std::cout << "Root 1: " << root1 << std::endl;
        std::cout << "Root 2: " << root2 << std::endl;
    } else {
        std::cout << "A equacao nao tem nenhuma raiz real." << std::endl;
    }

    return 0;

}
