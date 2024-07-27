#include <iostream>

int main() {
    //input and output
    int idade;
    std::string nome;

    std::cout << "Informe seu nome e idade\n";

    std::cin >> nome;
    std::cin >> idade;

    std::cout << "Seja bem vindo(a) " << nome << ", voce tem " << idade << " anos " << std::endl;

    return 0;
}

/*
std::cout
std::cin

ou

using std cout
using std cin...

ou

using namescape std
*/  
