#include <iostream>
using namespace std;

// Check if a string is a palindrome
void checkPalindrome() {
    string str, rev;
    cout << "Enter a string: ";
    cin >> str;
    rev = string(str.rbegin(), str.rend());
    cout << (str == rev ? "Palindrome" : "Not a Palindrome") << endl;
}

int main() {
    checkPalindrome();
    return 0;
}
