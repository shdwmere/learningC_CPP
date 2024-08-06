#include <iostream>

int main() {

    double terra_weight;
    int chosen_planet;

    std::cout << "\n- Hello Space Fighter Mac!\n";
    
    std::cout << "\n- Fighter, what is your current terrestrial weight in kgs?\n";
    std::cout << "Your answer: ";
    std::cin >> terra_weight;


    std::cout << "\n- Fighter, on which planet do you want to measure your weight? Select one integer:\n";

    std::cout << " 1. Mercury\n";
    std::cout << " 2. Venus\n";
    std::cout << " 3. Mars\n";
    std::cout << " 4. Jupiter\n";
    std::cout << " 5. Saturn\n";
    std::cout << " 6. Uranus\n";
    std::cout << " 7. Neptune\n";

    std::cout << "\nYour answer: ";
    std::cin >> chosen_planet;

    switch(chosen_planet) {
        case 1:
            std::cout << "\nYour terra weight in Mercury is equal to: " << terra_weight * 0.38 << "kgs\n";
            break;
        case 2:
            std::cout << "\nYour terra weight in Venus is equal to: " << terra_weight * 0.91 << "kgs\n";
            break;
        case 3:
            std::cout << "\nYour terra weight in Mars is equal to: " << terra_weight * 0.38 << "kgs\n";
            break;
        case 4:
            std::cout << "\nYour terra weight in Jupiter is equal to: " << terra_weight * 2.34 << "kgs\n";
            break;
        case 5:
            std::cout << "\nYour terra weight in Saturn is equal to: " << terra_weight * 1.06 << "kgs\n";
            break;
        case 6:
            std::cout << "\nYour terra weight in Uranus is equal to: " << terra_weight * 0.92 << "kgs\n";
            break;
        case 7:
            std::cout << "\nYour terra weight in Neptune is equal to: " << terra_weight * 1.19 << "kgs\n";
            break;
        default:
            std::cout << "Invalid.\n";
    }

    return 0;

}