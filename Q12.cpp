#include <iostream>
using namespace std;
void displayLeapYears(int startYear, int numYears) {
    int count = 0;
    while (count < numYears) {
        if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) {
            cout << startYear << " ";
            count++;
        }
        startYear++;
    }
    cout << endl;
}

int main() {
    int startYear, numYears;
    cout << "Enter the starting year: ";
    cin >> startYear;
    cout << "Enter how many leap years you want to see: ";
    cin >> numYears;
    displayLeapYears(startYear, numYears);

    return 0;
}
