#include <windows.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    /*
    rock > scissors
    scissors > paper
    paper > rock
    lizard > spock
    spock > scissors
    scissors > lizard
    lizard > paper
    paper > spock
    spock > rock
    rock > lizard
    */

    // output com emojis funcionando direito agora, graças a API <windows.h>
    SetConsoleOutputCP(CP_UTF8);

    // Live long and prosper
    srand(time(NULL));
    int computer = rand() % 5 + 1;

    std::cout << "=================================\n";
    std::cout << "Rock Paper Scissors Lizard Spock!\n";
    std::cout << "=================================\n";

    int user;

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) 🦎\n";
    std::cout << "5) 🖖\n";

    std::cout << "Escolha sua arma: ";
    std::cin >> user;

    switch (user) {
        case 1: // Humano escolheu Rock
        std::cout << "\nvocê escolheu: ✊\n";
            switch (computer) {
                case 1: // Computer escolhe Rock
                    std::cout << "cpu escolheu: ✊\n\n";
                    std::cout << "Empate!\n";
                    break;
                case 2: // Computer escolhe Paper
                    std::cout << "cpu escolheu: ✋\n\n";
                    std::cout << "CPU ganhous! Papel cobre Pedra.\n";
                    break;
                case 3: // Computer escolhe Scissors
                    std::cout << "cpu escolheu: ✌️\n\n";
                    std::cout << "Você ganhou! Pedra destrói Tesoura.\n";
                    break;
                case 4: // Computer escolhe LiZARD
                    std::cout << "cpu escolheu: 🦎\n\n";
                    std::cout << "Você ganhou! Pedra esmaga Lagarto.\n";
                    break;
                case 5: // Computer escolhe SPOK
                    std::cout << "cpu escolheu: 🖖\n\n";
                    std::cout << "CPU ganhous! Spock vaporiza Pedra.\n";
                    break;
                default:
                    std::cout << "CPU tentou cheat?!";
                    break;
        }
        break;
        case 2: // Humano escolheu Paper
        std::cout << "\nvocê escolheu: ✋\n";
            switch (computer) {
                case 1: // Computer escolhe Rock
                    std::cout << "cpu escolheu: ✊\n\n";
                    std::cout << "Você ganhou! Papel cobre Pedra.\n";
                    break;
                case 2: // Computer escolhe Paper
                    std::cout << "cpu escolheu: ✋\n\n";
                    std::cout << "Empate!\n";
                    break;
                case 3: // Computer escolhe Scissors
                    std::cout << "cpu escolheu: ✌️\n\n";
                    std::cout << "CPU ganhou! Tesoura corta Papel.\n";
                    break;
                case 4: // Computer escolhe LiZARD
                    std::cout << "cpu escolheu: 🦎\n\n";
                    std::cout << "CPU ganhou! Lizard come Papel.\n";
                    break;
                case 5: // Computer escolhe SPOK
                    std::cout << "cpu escolheu: 🖖\n\n";
                    std::cout << "Você ganhou! Papel refuta Spock.\n";
                    break;
                default:
                    std::cout << "CPU tentou cheat?!";
                    break;
        }
        break;
        case 3: // Humano escolheu Scissors
        std::cout << "\nvocê escolheu: ✌️\n";
            switch (computer) {
                case 1: // Computer escolhe Rock
                    std::cout << "cpu escolheu: ✊\n\n";
                    std::cout << "CPU ganhou! Pedra destrói Tesoura.\n";
                    break;
                case 2: // Computer escolhe Paper
                    std::cout << "cpu escolheu: ✋\n\n";
                    std::cout << "Você ganhou! Tesoura corta Papel.\n";
                    break;
                case 3: // Computer escolhe Scissors
                    std::cout << "cpu escolheu: ✌️\n\n";
                    std::cout << "Empate!\n";
                    break;
                case 4: // Computer escolhe LiZARD
                    std::cout << "cpu escolheu: 🦎\n\n";
                    std::cout << "Você ganhou! Tesoura decapita Lizard.\n";
                    break;
                case 5: // Computer escolhe SPOK
                    std::cout << "cpu escolheu: 🖖\n\n";
                    std::cout << "CPU ganhou! Spock quebra Tesoura.\n";
                    break;
                default:
                    std::cout << "CPU tentou cheat?!";
                    break;
        }
        break;
        case 4: // Humano escolheu Lizard
        std::cout << "\nvocê escolheu: 🦎\n";
            switch (computer) {
                case 1: // Computer escolhe Rock
                    std::cout << "cpu escolheu: ✊\n\n";
                    std::cout << "CPU ganhou! Pedra esmaga Lagarto.\n";
                    break;
                case 2: // Computer escolhe Paper
                    std::cout << "cpu escolheu: ✋\n\n";
                    std::cout << "Você ganhou! Lizard come Papel.\n";
                    break;
                case 3: // Computer escolhe Scissors
                    std::cout << "cpu escolheu: ✌️\n\n";
                    std::cout << "CPU ganhou! Tesoura decapita Lizard.\n";
                    break;
                case 4: // Computer escolhe LiZARD
                    std::cout << "cpu escolheu: 🦎\n\n";
                    std::cout << "Empate!\n";
                    break;
                case 5: // Computer escolhe SPOK
                    std::cout << "cpu escolheu: 🖖\n\n";
                    std::cout << "Você ganhou! Lizard envenena Spock.\n";
                    break;
                default:
                    std::cout << "CPU tentou cheat?!";
                    break;
        }
        break;
        case 5: // Humano escolheu Spock
        std::cout << "\nvocê escolheu: 🖖\n";
            switch (computer) {
                case 1: // Computer escolhe Rock
                    std::cout << "cpu escolheu: ✊\n\n";
                    std::cout << "Você ganhou! Spock vaporiza Pedra.\n";
                    break;
                case 2: // Computer escolhe Paper
                    std::cout << "cpu escolheu: ✋\n\n";
                    std::cout << "CPU ganhou! Papel refuta Spock.\n";
                    break;
                case 3: // Computer escolhe Scissors
                    std::cout << "cpu escolheu: ✌️\n\n";
                    std::cout << "Você ganhou! Spock quebra Tesoura.\n";
                    break;
                case 4: // Computer escolhe LiZARD
                    std::cout << "cpu escolheu: 🦎\n\n";
                    std::cout << "CPU ganhou! Lizard envenena Spock.\n";
                    break;
                case 5: // Computer escolhe SPOK
                    std::cout << "cpu escolheu: 🖖\n\n";
                    std::cout << "Empate!\n";
                    break;
                default:
                    std::cout << "CPU tentou cheat?!";
                    break;
        }
        break;

        default:
            std::cout << "Digite uma opção válida!";
            break;
    }
        
    return 0;
}