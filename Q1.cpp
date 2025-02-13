// To find profit or loss give the cost price and given price 

#include <iostream>
using namespace std;

void findProfitLoss(double costPrice, double sellingPrice){
    if(costPrice < sellingPrice){
        cout<<"The profit in this trade is : +"<<sellingPrice-costPrice<<endl;
    }
    else if(sellingPrice < costPrice){
        cout<<"The loss in this trade is : -"<<costPrice - sellingPrice<<endl;
    }else{
        cout<<"The trade is neutral!!";
    }
}

int main()
{
    double sellingPrice, costPrice = 0;
    int i = 0;
    while(i == 0)
    {
    cout<<"Enter positive COST PRICE : "<<endl;
    cin>>costPrice;
    while(costPrice<0){
        cout<<"Negative input is not allowed"<<endl;
        cin.clear();
        cout<<"Enter valid cost price : "<<endl;
        cin>>costPrice;
    }
    cout<<"Enter positive SELLING PRICE : "<<endl;
    cin>>sellingPrice;
    while(sellingPrice<0){
        cout<<"Negative input is not allowed"<<endl;
        cin.clear();
        cout<<"Enter valid selling price : "<<endl;
        cin>>sellingPrice;
    }
    findProfitLoss(costPrice, sellingPrice);
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Wolul you like to continue?\nPRESS 0 to CONTINUE, any number to EXIT"<<endl;
    cin>>i;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    }
    return 0;

}