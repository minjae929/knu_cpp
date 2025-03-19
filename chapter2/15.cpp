#include <iostream>
using namespace std;

int main() {
    int operand1, operand2;
    char operator1;

    while (true) {
        cout << "? ";
        cin >> operand1 >> operator1 >> operand2;

        int result = 0;

        switch (operator1) {

        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = operand1 / operand2;
            break;
        case '%':
            result = operand1 % operand2;
            break;
        }

        cout << operand1 << " " << operator1 << " " << operand2 << " = " << result << "\n";
    }
}
