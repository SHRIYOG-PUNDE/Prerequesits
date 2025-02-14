// to check if the give intege is prime or not
#include <iostream>
using namespace std;
void isPrime(int num){
    if(num == 0 || num == 1){
        cout<<"0 and 1 are neithe prime nor composit\n prime number starts from 2"<<endl;
    }
    else if(num == 2){
        cout<<"Prime Number"<<endl;
    }
    else{
        int flag = 1;
        for(int i = 2; i <= num/2; i++){
            if((num % i) == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            cout<<"not a prime number it is a composit number"<<endl;
        }else{
            cout<<"Prime number"<<endl;
        }
    }
}
int main() {
    int num, flag = 0;
    while(flag == 0){
    cout<<"Enter a number to check if its prime"<<endl;
    cin>>num;
    while(num<0){
        cout<<"Negative input is not allowed"<<endl;
        cin.clear();
        cout<<"Enter a number to check if its prime"<<endl;
        cin>>num;
    }
    isPrime(num);
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Would you like to continue?"<<endl;
    cout<<"PRESS 0 to CONTINUE, any number EXIT "<<endl;
    cin>>flag;
    cout<<"-------------------------------------------------------------------"<<endl;
    }
    return 0;
}