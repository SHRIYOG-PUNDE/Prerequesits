#include<iostream>
using namespace std;
void findCircumference(double radius){
    double circumference = 0;
    circumference = 2 * 3.144 * radius;
    cout << "Circumference of the circle: " << circumference << endl;
}
void findArea(double radius){
    double area = 0;
    area = 3.144 * radius * radius;
    cout << "Area of the circle: " << area << endl;
}
int main() {
    double radius;
    int option;
    cout<<"Enter which operation your want to perform : "<<endl;
    cout<<"1. Area\n2. Circumference"<<endl;
    cin>>option;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
     while(radius<0){
        cout<<"Negative input is not allowed"<<endl;
        cin.clear();
        cout<<"Enter valid number : "<<endl;
        cin>>radius;
    }  
    switch (option)
    {
    case 1:
    findArea(radius);
    break;
    case 2:
    findCircumference(radius);
    break;
    default:
    cout<<"Invalid Input"<<endl;
        break;
    }  
    return 0;
}