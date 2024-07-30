#include <iostream>
#include <vector>

void twoPointers() {
    std::vector<char> palavra = {'a', 'r', 'a', 'r', 'a'};

    int esq = 0;
    int dir = palavra.size() - 1;

    bool palindromo = true;

    while(esq <= dir) {
        if (palavra[esq] != palavra[dir]) {
            palindromo = false;
            break;
        }
        esq++;
        dir--;
    }

    std::cout << palindromo;
}

int main() {

    twoPointers();

    /*
    Sem two-pointers ->

    std::vector<char> meuAray = {'a', 'r', 'a', 'r', 'a'};
    std::vector<char> invertido(meuAray.size());

    int count = 0;

    for (int k = meuAray.size() - 1; k >= 0; k--, count++) {
        invertido[count] = meuAray[k];
    }

    for (char letra: invertido) {
        std::cout << letra;
    }
     */

     

    return 0;
}