#include <iostream>
using namespace std;

long long factorial(int num) {
    return (num <= 1) ? 1 : num * factorial(num - 1);
}

int main() {
    int num;
    char choice;

    do {
        cout << "Enter a non-negative number to calculate factorial: ";
        cin >> num;

        while (num < 0) {
            cout << "Factorial is not defined for negative numbers. Please enter a non-negative number: ";
            cin >> num;
        }
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
        cout << "Do you want to calculate another factorial? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
