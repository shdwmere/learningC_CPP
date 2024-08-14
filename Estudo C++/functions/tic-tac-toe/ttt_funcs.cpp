#include <iostream>
#include <vector>
#include <cstdlib>  // Para std::rand e std::srand
#include <ctime>    // Para std::time

std::vector<std::vector<char>> position(3, std::vector<char>(3, ' '));
char player = 'x';
char cpu = 'o';
char current_player = player;

void desenhar_banner() {
    std::cout << " ______   __     ______     ______   ______     ______     ______   ______     ______    " << std::endl;
    std::cout << "/\\__  _\\ /\\ \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\  ___\\   " << std::endl;
    std::cout << "\\/_/\\ \\/ \\ \\ \\  \\ \\ \\____  \\/_/\\ \\/ \\ \\  __ \\  \\ \\ \\____  \\/_/\\ \\/ \\ \\ \\/\\ \\  \\ \\  __\\   " << std::endl;
    std::cout << "   \\ \\_\\  \\ \\_\\  \\ \\_____\\    \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\    \\ \\_\\  \\ \\_____\\  \\ \\_____\\ " << std::endl;
    std::cout << "    \\/_/   \\/_/   \\/_____/     \\/_/   \\/_/\\/_/   \\/_____/     \\/_/   \\/_____/   \\/_____/ " << std::endl;
    std::cout << std::endl;  // Adiciona uma linha em branco após o banner
    std::cout << "by shdw";
    std::cout << std::endl;
    std::cout << std::endl;
}

void desenhar_tabuleiro() {

    std::cout << std::endl;

    std::cout << "Tabuleiro atual: \n\n";

    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {
            std::cout << " " << position[i][j] << " ";
            if (j < 2) std::cout << "|";
        }

        std::cout << std::endl;

        if (i < 2) std::cout << "---+---+---" << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

}

// checar ganhador
bool chk_win() {

    return false;
}

// verificar se o tabuleiro esta cheio
bool chk_tie() {
    
    return false;
}

void alternar_jogador() {

}

void turno_jogador() {

}

void turno_cpu() {

}

void inciar_jogo() {

    desenhar_banner();
    desenhar_tabuleiro();

}