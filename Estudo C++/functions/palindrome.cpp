#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    std::string reversed_text;

    // itera sobre as letras da string ao contrario
    for(int i = text.length() - 1; i >= 0; i--) {
        // monta o texto ao contrario na variavel `reversed_text`
        reversed_text += text[i];
    }

    // retorna bool
    return reversed_text == text;
}

int main() {
    
    std::cout << std::boolalpha; // ativa a impressão de true/false
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
  
}