//      Inline Functions, Default Arguments & Constant Arguments ------>

#include<iostream>
using namespace std;

 // # inline function

// inline int product(int a, int b){
//     return a*b;
//}


// # Defult Argument 
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

int main()
{
    // --> Inline funtion
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    // Defulat  Function -->
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";


    return 0;
}