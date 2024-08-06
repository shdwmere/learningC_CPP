#include <iostream>

/*
Aqui abordamos, pela primeira vez, o uso de função em C++, brincando com condicional tbm.
*/

void hatQuestion1(int &answer1, int &hufflepuff, int &slytherin, int &ravenclaw, int &gryffindor) {   
    std::cout << "\nThe Sorting Hat Quiz!\n\n";
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n\n";

    std::cout << "Your answer: ";
    std::cin >> answer1;
        
    switch (answer1)
        {
        case 1:
            std::cout << "+1 point to Hufflepuff!\n\n";
            hufflepuff++;
            break;
        case 2:
            std::cout << "+1 point to Slytherin!\n\n";
            slytherin++;
            break;
        case 3:
            std::cout << "+1 point to Ravenclaw!\n\n";
            ravenclaw++;
            break;
        case 4:
            std::cout << "+1 point to Gryffindor!\n\n";
            gryffindor++;
            break;
        default:
            std::cout << "Provide a valid option!\n\n";
            break;
    }
}

void hatQuestion2(int &answer2, int &hufflepuff, int &slytherin, int &ravenclaw, int &gryffindor) {   
    std::cout << "Q2) Dawn or Dusk?:\n";
    std::cout << "1) Dawn.\n";
    std::cout << "2) Dusk.\n\n";

    std::cout << "Your answer: ";
    std::cin >> answer2;
        
    switch (answer2)
        {
        case 1:
            std::cout << "+1 point to both Gryffindor and Ravenclaw!\n\n";
            gryffindor++;
            ravenclaw++;
            break;
        case 2:
            std::cout << "+1 point to both Slytherin and Hufflepuff!\n\n";
            slytherin++;
            hufflepuff++;
            break;
        default:
            std::cout << "Provide a valid option!\n\n";
            break;
    }
}

void hatQuestion3(int &answer3, int &hufflepuff, int &slytherin, int &ravenclaw, int &gryffindor) {   
    std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
    std::cout << "1) The violin.\n";
    std::cout << "2) The trumpet.\n";
    std::cout << "3) The piano.\n";
    std::cout << "4) The drum.\n\n";

    std::cout << "Your answer: ";
    std::cin >> answer3;
        
    switch (answer3)
        {
        case 1:
            std::cout << "+1 point to Slytherin!\n\n";
            slytherin++;
            break;
        case 2:
            std::cout << "+1 point to Hufflepuff!\n\n";
            hufflepuff++;
            break;
        case 3:
            std::cout << "+1 point to Ravenclaw!\n\n";
            ravenclaw++;
            break;
        case 4:
            std::cout << "+1 point to Gryffindor!\n\n";
            gryffindor++;
            break;
        default:
            std::cout << "Provide a valid option!\n\n";
            break;
    }
}

void hatQuestion4(int &answer4, int &hufflepuff, int &slytherin, int &ravenclaw, int &gryffindor) {   
    std::cout << "Q4) Which road tempts you most?\n";
    std::cout << "1) The wide, sunny grassy lane.\n";
    std::cout << "2) The narrow, dark, lantern-lit alley.\n";
    std::cout << "3) The twisting, leaf-strewn path through woods.\n";
    std::cout << "4) The cobbled street lined (ancient buildings).\n\n";

    std::cout << "Your answer: ";
    std::cin >> answer4;
        
    switch (answer4)
        {
        case 1:
            std::cout << "+1 point to Hufflepuff!\n\n";
            hufflepuff++;
            break;
        case 2:
            std::cout << "+1 point to Slytherin!\n\n";
            slytherin++;
            break;
        case 3:
            std::cout << "+1 point to Gryffindor!\n\n";
            gryffindor++;
            break;
        case 4:
            std::cout << "+1 point to Ravenclaw!\n\n";
            ravenclaw++;
            break;
        default:
            std::cout << "Provide a valid option!\n\n";
            break;
    }
}

void maximumHouse(std::string &house, int &max, int &answer1, int &answer2, int &answer3, int &answer4, int &hufflepuff, int &slytherin, int &ravenclaw, int &gryffindor) {
    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }

    std::cout << "Your house is: " << house << "!\n";
}  

int main() {
    // The magic starts here
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;
    int max = 0;
    std::string house;

    hatQuestion1(answer1, hufflepuff, slytherin, ravenclaw, gryffindor);
    hatQuestion2(answer2, hufflepuff, slytherin, ravenclaw, gryffindor);
    hatQuestion3(answer3, hufflepuff, slytherin, ravenclaw, gryffindor);
    hatQuestion4(answer4, hufflepuff, slytherin, ravenclaw, gryffindor);
    maximumHouse(house, max, answer1, answer2, answer3, answer4, hufflepuff, slytherin, ravenclaw, gryffindor);
    
    return 0;
}