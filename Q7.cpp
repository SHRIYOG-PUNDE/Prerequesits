#include<iostream>
using namespace std;
void largestOfThree() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Largest number is: " << max(a, max(b, c)) << endl;

}
int main(){
    largestOfThree();
    return 0;
}