#include<iostream>
using namespace std;
// Function to calculate division based on marks
void displayResult(float marks) {
    if (marks >= 60)
        cout << "First Division" << endl;
    else if (marks >= 50)
        cout << "Second Division" << endl;
    else if (marks >= 40)
        cout << "Third Division" << endl;
    else
        cout << "Fail" << endl;
}
int main(){
    float marks = 0;
    while(marks<0){
        cout<<"Negative input is not allowed"<<endl;
        cin.clear();
        cout<<"Enter positive percentage out of 100"<<endl;
        cin>>marks;
    }
    displayResult(marks);
    return 0;
}


// implement recursion 
// bfs is there any need of recursion and is it worthy