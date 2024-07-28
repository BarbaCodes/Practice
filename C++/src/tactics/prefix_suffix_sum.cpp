#include <iostream>
#include <vector>
#include <algorithm>

//"vector" is a dinamic array with methods"

using namespace std;

const int SIZE = 3;

void readVector(vector<int> &numbers) {
    //for range-based "baseado em intervalo", itera sobre os endereços de cada item do array
    for (int &number: numbers) {
        cout << "Informe um valor" << endl;
        cin >> number;
    }
}

//exemplo do for_each (<algorithm>)
/*for_each: iterador, recebe três paremetros: primeiro e último valor do intervalo (do vetor em análise), e uma função, que 
será executada para cada item do vetor, ou, uma expressão lambda []() {}*/
void printVector(vector<int> &numbers) {
    for_each(numbers.begin(), numbers.end(), [](int number) {
        cout << number << endl; 
    });
}

void prefixSum(const vector<int> &numbers) {
    int size = numbers.size();
    vector<int> prefixAdded(size);

    prefixAdded[0] = numbers[0];

    for (int k = 1; k < size; k++) {
        prefixAdded[k] = prefixAdded[k-1] + numbers[k];
    }

    printVector(prefixAdded);
}

void suffixSum(const vector<int> &numbers) {
    int size = numbers.size();
    vector<int> suffixAdded(size);

    suffixAdded[size-1] = numbers[size-1];

    for (int k = size-2; k >= 0; k--) {
        suffixAdded[k] = suffixAdded[k+1] + numbers[k]; 
    }

    printVector(suffixAdded);
}

int main() {
    vector<int> numbers(SIZE);
    readVector(numbers);

    prefixSum(numbers);
    suffixSum(numbers);

    return 0;
}