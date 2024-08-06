#include <iostream>

int main() {

    double pesos;
    double reais;
    double soles;
    double dollars;

    double pesos_rate = 0.00025;
    double reais_rate = 0.17;
    double soles_rate = 0.27;

    std::cout << "\nEnter number of Colombian Pesos: COL$ ";
    std::cin >> pesos;
    std::cout << "Enter number of Brazilian Reais: R$ ";
    std::cin >> reais;
    std::cout << "Enter number of Peruvian Soles: PEN$ ";
    std::cin >> soles;

    dollars = (pesos * pesos_rate) + (reais * reais_rate) + (soles * soles_rate);

    std::cout << "\nUS$ Dollars = $" << dollars << ". \n";
    
}