#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int choice;
    bool validChoice = false;

    std::cout << "\nVocê é um hacker conhecido como 'Shadow'. Você recebe uma oferta anônima para hackear uma grande corporação.\n\n";
    std::cout << "1. Aceitar a oferta e começar a planejar o hack.\n";
    std::cout << "2. Recusar a oferta e investigar quem enviou a mensagem.\n";
    std::cout << "3. Ignorar a mensagem e continuar com seus trabalhos normais.\n";

    while (!validChoice) {
        std::cout << "Escolha uma opção (1, 2, 3): ";
        std::cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            validChoice = true;
        } else {
            std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    if (choice == 1) {
        std::cout << "\nVocê aceitou a oferta e começou a planejar o hack.\n\n";
        
        std::cout << "1. Infiltrar-se na rede da empresa usando phishing.\n";
        std::cout << "2. Usar uma vulnerabilidade conhecida no sistema da empresa.\n";
        std::cout << "3. Contratar um insider para obter acesso às credenciais.\n";

        validChoice = false;
        while (!validChoice) {
            std::cout << "Escolha uma opção (1, 2, 3): ";
            std::cin >> choice;

            if (choice == 1 || choice == 2 || choice == 3) {
                validChoice = true;
            } else {
                std::cout << "Opção inválida. Tente novamente.\n";
            }
        }

        if (choice == 1) {
            std::cout << "\nVocê optou por infiltrar-se na rede da empresa usando phishing.\n\n";
            std::cout << "Durante o hack, você descobre atividades ilegais da corporação.\n\n";

            std::cout << "1. Expor as atividades ilegais ao público.\n";
            std::cout << "2. Chantagear a corporação por mais dinheiro.\n";
            std::cout << "3. Abandonar o hack e fugir para não se envolver.\n";

            validChoice = false;
            while (!validChoice) {
                std::cout << "Escolha uma opção (1, 2, 3): ";
                std::cin >> choice;

                if (choice == 1 || choice == 2 || choice == 3) {
                    validChoice = true;
                } else {
                    std::cout << "Opção inválida. Tente novamente.\n";
                }
            }

            if (choice == 1) {
                std::cout << "\nVocê expôs as atividades ilegais. Você é um herói, mas vive com medo de retaliações.\n\n";
            } else if (choice == 2) {
                std::cout << "\nVocê chantageou a corporação e recebeu mais dinheiro, mas agora vive em fuga.\n\n";
            } else if (choice == 3) {
                std::cout << "\nVocê abandonou o hack e escapou ileso, mas perdeu a oportunidade de criptomoedas.\n\n";
            }

        } else if (choice == 2) {
            std::cout << "\nVocê usou uma vulnerabilidade conhecida no sistema da empresa. (continuação do enredo)\n\n";
        } else if (choice == 3) {
            std::cout << "\nVocê contratou um insider para obter acesso às credenciais. (continuação do enredo)\n\n";
        }

    } else if (choice == 2) {
        std::cout << "\nVocê recusou a oferta e começou a investigar quem enviou a mensagem. (continuação do enredo final 2)\n\n";
    } else if (choice == 3) {
        std::cout << "\nVocê ignorou a mensagem e continuou com seus trabalhos normais. (continuação do enredo final 3)\n\n";
    }

    return 0;
}
