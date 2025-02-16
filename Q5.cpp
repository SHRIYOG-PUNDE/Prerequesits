#include <iostream>
using namespace std;

void calculate(double num1, char op, double num2) {
    try {
        if (op == '/' && num2 == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        double result;
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                throw invalid_argument("Error: Invalid operator. Use +, -, *, or /.");
        }
        cout<<"Result: "<<result<<endl;
    }
    catch(const exception &e) {
        cout<<e.what()<<endl;
    }
}

int main() {
    double num1, num2;
    char op;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;

    cout<<"Enter second number: ";
    cin>>num2;

    calculate(num1, op, num2);

    return 0;
}
