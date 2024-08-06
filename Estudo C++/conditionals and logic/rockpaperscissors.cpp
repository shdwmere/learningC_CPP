#include <windows.h>
#include <iostream>
#include <stdlib.h>

/*
Write a rock_paper_scissors.cpp program that:

Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is.
Note: This project will be particularly challenging due to its complex logic. Beware! Only the brave should venture forth.
*/

int main() {

    // output com emojis funcionando direito agora, graças a API <windows.h>
    SetConsoleOutputCP(CP_UTF8);
    
    // Live long and prosper
    srand (time(NULL));
    
    int computer = rand() % 3 + 1;

    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot: ";

    std::cin >> user;
    
    if (user == 1)
        std::cout << "\nyou choose: ✊\n";
    else if (user == 2)
        std::cout << "\nyou choose: ✋\n";
    else
        std::cout << "\nyou choose: ✌️\n";

    if (computer == 1)
        std::cout << "cpu choose: ✊\n\n";
    else if (computer == 2)
        std::cout << "cpu choose: ✋\n\n";
    else
        std::cout << "cpu choose: ✌️\n\n";


    // checando se deu empate
    if (user == computer) {
        std::cout << "it's a tie!\n"; 
    }
    // pedra
    else if (user == 1) {
        if (computer == 2) 
            std::cout << "you lost! booooo!\n";
        if (computer == 3) 
            std::cout << "you won! wooohooo!\n";
    }
    // papel
    else if (user == 2) {
        if (computer == 3)
            std::cout << "you lost! booooo!\n";
        if (computer == 1)
            std::cout << "you won! wooohooo!\n";
    }
    // tesoura
    else if (user == 3) {
        if (computer == 1)
            std::cout << "you lost! booooo!\n";
        if (computer == 2)
            std::cout << "you won! wooohooo!\n";
    }
    // lizard
    else if (user == 4) {
        if (computer == 1)
            std::cout << "you lost! booooo!\n";
        if (computer == 2)
            std::cout << "you won! wooohooo!\n";
    }
    // spock
    else if (user == 5) {
        if (computer == 1)
            std::cout << "you lost! booooo!\n";
        if (computer == 2)
            std::cout << "you won! wooohooo!\n";
    }
  
}
