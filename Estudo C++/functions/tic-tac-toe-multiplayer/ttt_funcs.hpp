#include <iostream>
#include <string>
#include <vector>

// consts indicam que eu nao estou alterando o valor da variavel.

void desenhar_banner();
void desenhar_tabuleiro(char tabuleiro[3][3]);
void como_jogar();
int mostrar_menu();
void mapear_escolha_para_posicao(int escolha, int &row, int &col);
bool validar_entrada(const int &escolha);
bool chk_win(const char tabuleiro[3][3], char player);
void chk_tie(int turn, const char tabuleiro[3][3]);
void reset_tabuleiro();
void iniciar_jogo(bool vs_cpu = false);