#include <iostream>
#include <cmath>

using namespace std;

typedef struct numbersOp {
    float numberA, numberB, numberC;

    float deltCalculate() {
        return pow(numberB, 2) - (4 * numberA * numberC);
    }

    int defineNumberSquares() {
        int squares = deltCalculate();
        if (squares > 0) {
            return 2;
        }
        else if (squares == 0) {
            return 1;
        }
        return 0;
    }

    void setValues() {
        cout << "Informe a, b e c de uma equacao do segundo grau: \n";
        cin >> numberA >> numberB >> numberC;
    }

} numbersOp;

//if sqrts > 2
void generateSqrt(int execute, numbersOp numbers) {
    float result;

    //plus
    float delt = execute%2 == 0 ?sqrt(numbers.deltCalculate()) : -sqrt(numbers.deltCalculate());

    result = ((-numbers.numberB) + delt) / (2 * numbers.numberA);
 
    cout << "Square = " << result << endl;

    if (execute > 1) {
        return generateSqrt(execute-1, numbers);
    }
}

void calculateOneSqrt(numbersOp numbers) {
    float value = ((-numbers.numberB) + sqrt(numbers.deltCalculate())) / (2 * numbers.numberA);

    cout << "Squares = " << value << ", " << -value << endl;
}

void calculateEquation(numbersOp numbers) {
    numbers.setValues();
    int sqrts = numbers.defineNumberSquares();

    generateSqrt(sqrts, numbers);

    cout << "End of program, have " << sqrts << " sqrts " << endl;
}

int main() {
    numbersOp numbers;

    calculateEquation(numbers);

    return 0;
}