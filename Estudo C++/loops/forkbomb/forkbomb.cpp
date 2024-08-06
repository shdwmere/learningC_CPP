#include <bits/stdc++.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <windows.h>
using namespace std;

void createFolder() {
    SetConsoleOutputCP(CP_UTF8);

    int amount;
    while (true) {
        std::cout << "Digite a quantidade de pastas: ";
        std::cin >> amount;

        if (std::cin.fail() || amount <= 0) {
            std::cin.clear(); // limpa o estado de erro de cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignora a entrada inválida
            std::cout << "Entrada inválida. Por favor, insira um número inteiro positivo.\n";
        } else {
            break; // entrada válida
        }
    }

    for (int i = 1; i <= amount; i++) {
        std::string folderName = "bomb" + std::to_string(i);
        if (mkdir(folderName.c_str()) == -1) {
            if (errno == EEXIST) {
                std::cout << "O diretório '" << folderName << "' já existe.\n";
            } else {
                std::cerr << "Erro ao criar '" << folderName << "': " << strerror(errno) << std::endl;
            }
        } else {
            std::cout << "Diretório '" << folderName << "' criado com sucesso.\n";
        }
    }
    // Opção para excluir os diretórios criados
    char choice;
    std::cout << "Deseja excluir os diretórios criados? (s/n): ";
    std::cin >> choice;
    if (choice == 's' || choice == 'S') {
        for (int i = 1; i <= amount; i++) {
            std::string folderName = "bomb" + std::to_string(i);
            std::string command = "rm -r " + folderName;
            system(command.c_str()); // Executa o comando no terminal
            std::cout << "Diretório '" << folderName << "' excluído.\n";
        }
    }
}

int main()
{
    createFolder();
    return 0;
}