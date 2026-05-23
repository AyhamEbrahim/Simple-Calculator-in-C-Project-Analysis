#include <iostream>
using namespace std;

enum Operation {
    ADD = 1,
    SUB,
    MUL,
    DIV
};

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double divideNumbers(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
        return 0;
    }
    return a / b;
}

double compute(Operation op, double a, double b) {
    switch (op) {
    case ADD: return add(a, b);
    case SUB: return sub(a, b);
    case MUL: return mul(a, b);
    case DIV: return (a, b);
    default:
        cout << "Unknown operation!\n";
        return 0;
    }
}

int main() {
    double num1, num2;
    int op;

    cout << "===== Calculator (Divide & Conquer) =====\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose operation:\n";
    cout << "1 - Addition\n";
    cout << "2 - Subtraction\n";
    cout << "3 - Multiplication\n";
    cout << "4 - Division\n";
    cout << "Your choice: ";
    cin >> op;

    double result = compute(static_cast<Operation>(op), num1, num2);

    cout << "\nResult: " << result << endl;

    return 0;
}
