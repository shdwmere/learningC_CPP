// ttt_funcs.cpp
#include <iostream>
#include <limits>

char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; // para criar um tabuleiro, usarei um array 3x3 com espacos em branco incializados
char player = 'X';
int row, col;
int turn;

void desenhar_banner() {
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << " ______   __     ______     ______   ______     ______     ______   ______     ______    " << std::endl;
    std::cout << "/\\__  _\\ /\\ \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\  ___\\   " << std::endl;
    std::cout << "\\/_/\\ \\/ \\ \\ \\  \\ \\ \\____  \\/_/\\ \\/ \\ \\  __ \\  \\ \\ \\____  \\/_/\\ \\/ \\ \\ \\/\\ \\  \\ \\  __\\   " << std::endl;
    std::cout << "   \\ \\_\\  \\ \\_\\  \\ \\_____\\    \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\    \\ \\_\\  \\ \\_____\\  \\ \\_____\\ " << std::endl;
    std::cout << "    \\/_/   \\/_/   \\/_____/     \\/_/   \\/_/\\/_/   \\/_____/     \\/_/   \\/_____/   \\/_____/ " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "by shdw";
    std::cout << std::endl;
    std::cout << std::endl;
}

void desenhar_tabuleiro(char tabuleiro[3][3]) {
    std::cout << "\n-------------\n";
    // looping da primeira coluna
    for (int i = 0; i < 3; i++) {
        std::cout << "| ";
        // looping do restante
        for (int j = 0; j < 3; j++) {
            std::cout << tabuleiro[i][j] << " | ";
        }
     std::cout << "\n-------------\n";
    }
}

void como_jogar() {
    std::cout << "\n****************\n\n";
    char tabuleiro_exemplo[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    std::cout << "Como jogar:\n\n";
    std::cout << "Jogo feito para duas pessoas jogarem, o programa espera um input da linha e coluna desejada.\n\n";
    std::cout << "O tabuleiro é representado por uma matriz 3x3, onde as posições são indexadas de 0 a 2. No entanto, o jogador escolhe uma célula usando números de 1 a 9.\n\n";
    std::cout << "Jogador X, escolha uma celula [1-9]: 2\n";
    
    tabuleiro_exemplo[0][1] = 'X';

    std::cout << "\nResultado:";
    desenhar_tabuleiro(tabuleiro_exemplo);
    std::cout << "\n****************\n\n";
}

// menu inicial
int mostrar_menu() {
    int escolha;
    bool escolha_valida = false;

    while (!escolha_valida) {
        std::cout << "\n===== Menu Tic-Tac-Toe =====\n";
        std::cout << "1. Iniciar jogo\n";
        std::cout << "2. Como jogar\n";
        std::cout << "3. Sair\n\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> escolha;

        // verifica se a entrada é valida
        if (std::cin.fail() || escolha < 1 || escolha > 3) {
            std::cin.clear(); // limpa o estado de erro do cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignora entradas inválidas
            std::cout << "Opção inválida. Por favor, escolha uma opção entre 1 e 3.\n";
        } else {
            escolha_valida = true;
        }
    }

    return escolha;
}

// funcao para mapear a escolha do jogador para a posicao no tabuleiro
void mapear_escolha_para_posicao(int escolha, int &row, int &col) {
    escolha--; // decrementa para trabalhar com index 0 based
    row = escolha / 3; // calculando a linha
    col = escolha % 3; // calculando a coluna
    /*
    Explicacao Logica:

    Escolha = 1:

    Após o decremento: 0
    Linha: 0 / 3 = 0
    Coluna: 0 % 3 = 0
    Posição no tabuleiro: tabuleiro[0][0]

    ---

    Escolha = 9:

    Após o decremento: 8
    Linha: 8 / 3 = 2
    Coluna: 8 % 3 = 2
    Posição no tabuleiro: tabuleiro[2][2]

    ---

    Resumo:

    Divisão Inteira: `escolha` / 3 nos dá o índice da linha.
    Módulo: `escolha` % 3 nos dá o índice da coluna.
    O decremento inicial de 1 ajusta o número para se alinhar com o sistema de indexação 0-based usado em arrays em C++.
    */
}

// funcao pra validar o input do jogador.
bool validar_entrada(int &escolha) {
    std::cin >> escolha;

    if(std::cin.fail() || escolha < 1 || escolha > 9) {
        std::cin.clear(); //limpa o estado de erro
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignora a linha invalida
        std::cout << "Entrada invalida. Por favor, insira um numero entre 1 e 9.\n";
        return false;
    }

    return true;
}

// determinar ganhador
bool chk_win(char tabuleiro[3][3], char player) {

    // essa funcao checa linhas, colunas e diagonais
    for (int i = 0; i < 3; i++) {
        // checa se o jogador venceu na linha i
        if (tabuleiro[i][0] == player && tabuleiro[i][1] == player && tabuleiro[i][2] == player)
            return true;
        // checa se o jogador venceu na coluna i
        if (tabuleiro[0][i] == player && tabuleiro[1][i] == player && tabuleiro[2][i] == player)
            return true;
    }
    // checa se o jogador venceu na diagonal principal (\)
    if (tabuleiro[0][0] == player && tabuleiro[1][1] == player && tabuleiro[2][2] == player)
        return true;
    // checa se o jogador venceu na diagonal secundária (/)
    if (tabuleiro[0][2] == player && tabuleiro[1][1] == player && tabuleiro[2][0] == player)
        return true;

    return false;

}

// verificar se o tabuleiro esta cheio
void chk_tie(int turn, char tabuleiro[3][3]) {
    if (turn == 9 && !chk_win(tabuleiro, 'X') && !chk_win(tabuleiro, 'O')) {
        std::cout << "\n\nDeu um empate!\n\n";
    }
}

void reset_tabuleiro() {
    // Resetando o tabuleiro para o estado inicial
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' '; // Espaço em branco
        }
    }

    player = 'X';
    turn = 0;
}

void jogada_cpu() {
    int escolha;

    do {
        escolha = rand() % 9 + 1; // escolhe aleatoriamente de 1 a 9
        mapear_escolha_para_posicao(escolha, row, col);
    } while (tabuleiro[row][col] != ' ');

    tabuleiro[row][col] = 'O';
    std::cout << "CPU escolheu a celula " << escolha << "\n";
}

void iniciar_jogo(bool vs_cpu = false) {
    reset_tabuleiro(); // resetar tabuleiro sempre q comecar

    std::cout << "\nInicio do Jogo!\n";

    srand(static_cast<unsigned int>(time(0))); // inicializa a seed do gerador de escolhas aleatorias

    for (turn = 0; turn < 9; turn++) {
        
        desenhar_tabuleiro(tabuleiro);

        if (player == 'X' || !vs_cpu) {
            int escolha;

            // prompt de um input valido
            while (true) {
                std::cout << "\nJogador " << player << 
                ", escolha uma celula [1-9]: "; 
                
                if (!validar_entrada(escolha)) {
                    continue; // se a entrada for invalida, repete o loop
                }

                mapear_escolha_para_posicao(escolha, row, col);

                if (tabuleiro[row][col] != ' ') {
                    std::cout << "Movimento inválido. A célula já está ocupada. Tente novamente.\n";
                } else {
                    break; // input valido, exit loop
                }
            }
        
        tabuleiro[row][col] = player;
        } else if (vs_cpu && player == 'O') {
            jogada_cpu();
        }


        // checa se o jogador ganhou depois de fazer um movimento
        if (chk_win(tabuleiro, player)) {
            desenhar_tabuleiro(tabuleiro);
            std::cout << "\n\nJogador " << player << " venceu!!!\n\n";
            break;
        }

        // alterna entre os jogadores
        player = (player == 'X') ? 'O' : 'X';
    }

    desenhar_tabuleiro(tabuleiro);
    
    chk_tie(turn, tabuleiro);
}