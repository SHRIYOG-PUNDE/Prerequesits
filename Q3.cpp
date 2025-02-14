// to check if the given number is even or odd
#include<iostream>
using namespace std;
void findEvenOdd(int number){
    if(number % 2 == 0){
        cout<<"Number is even"<<endl;
    }else{
        cout<<"Number is odd"<<endl;
    }
}
int main(){
    int number;
    cout<<"Enter the number to check if it even or odd : "<<endl;
    cin>>number;
    findEvenOdd(number);
    return 0;
}