// Print pyramid of numbers
#include<iostream>
using namespace std;
void printPyramid(int rows, string str) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << str;
        cout << endl;
    }
}
int main(){
    string str = "";
    int row = 0;
    cout<<"Enter the character to print : "<<endl;
    cin >> str;
    cout<<"Enter number of rows to print : "<<endl;
    cin >> row;
    printPyramid(row, str);
    return 0;
}