/*
Pega uma frase como `"turpentine and turtles"` e traduz para seu equivalente em “conversa de baleia”, `"uueeieeauuee"`.

Existem algumas regras simples para traduzir texto para a língua das baleias:

- Não há consoantes. Apenas vogais.
- Os `u`'s e `e`'s são extra longos, então devemos dobrá-los.
*/

#include <iostream>
#include <vector>
#include <string>

int main() {

    // Whale, whale, whale.
    // What have we got here?

    std::string input = "turpentine and turtles";

    std::vector<char> vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');

    std::vector<char> whale_talk;

    // iterando sobre cada caractere
    for (int i = 0; i < input.size(); i++) {

        // itera sobre o vetor de vogais e compara com os caracteres do input
        for (int v = 0; v < vowels.size(); v++) {
            if(input[i] == vowels[v]) {

                whale_talk.push_back(input[i]); // add o caractere equivalente para o vetor whale_talk
                
                // add um 'e' adicional caso o caractere seja 'e'.
                if(input[i] == vowels[1]) {
                    whale_talk.push_back(input[i]);
                } 
                // add um 'u' adicional caso o caractere seja 'u'.
                else if (input[i] == vowels[4]) {
                    whale_talk.push_back(input[i]);
                }

            }
        }

    }
    
    std::cout << "\nNormal Talk: " << input << "\n";
    
    std::cout << "Whale Talk: ";
    for (int w = 0; w < whale_talk.size(); w++) {
        std::cout << whale_talk[w];
    }
    std::cout << "\n\n";

    return 0;
}