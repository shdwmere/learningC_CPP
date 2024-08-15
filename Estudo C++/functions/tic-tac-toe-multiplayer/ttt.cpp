// ttt.cpp
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "ttt_funcs.hpp"

int main() {
    desenhar_banner();

    int escolha;

    do {
        escolha = mostrar_menu();

        switch(escolha) {
            case 1:
                std::cout << "\nEscolha o modo de jogo:\n1. Jogador vs Jogador\n2. Jogador vs CPU\n";
                int modo;
                std::cout << "Sua escolha: ";
                std::cin >> modo;
                if (modo == 1) {
                    iniciar_jogo(false);
                } else if (modo == 2) {
                    iniciar_jogo(true);
                } else {
                    std::cout << "Modo inválido. Voltando ao menu...\n";
                }
                break;
            case 2:
                como_jogar();
                break;
            case 3:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opção inválida! Tente novamente.\n";
                break;
        }
    } while (escolha != 3);

    return 0;
}