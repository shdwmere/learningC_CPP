#include <iostream>

bool needs_it_support() {

    /*
    Quando você realmente deseja que sua função retorne algo e passe informações de volta para o restante do seu programa, C++ tem tudo que você precisa.
    Assim como existem muitos tipos de variáveis, há muitos tipos diferentes de retorno para funções.
    */

    bool support;

    std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";

    std::cin >> support;

    return support;
}

int main()
{

    // A linha final não será executada porque um valor já foi retornado. Portanto, "Returned blue!" não será impresso no terminal.
    std::cout << needs_it_support();
}