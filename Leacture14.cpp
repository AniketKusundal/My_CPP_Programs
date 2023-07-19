// Structures, Unions & Enums
#include<iostream>
using namespace std;

// Sturcture ------->

    struct  Student
    {
        int sId;
        char favChar;
        float marks;
    };



    // Union  ----->>>>


    union  money
    {
       int rice;
       char car;
       float doller;
    };
    

int main()
{


    // Enum----->
    
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;



    // union money m1;
    // m1.rice = 30;
    // m1.car = 'A';
    // cout<<m1.rice<<endl;
     










    // struct Student Aniket;

    // Aniket.sId = 1;
    // Aniket.favChar= 'a';
    // Aniket.marks = 70.70;


    // cout<<"The Value is "<<Aniket.sId<<endl;
    // cout<<"The Value is "<<Aniket.favChar<<endl;
    // cout<<"The Value is "<<Aniket.marks<<endl;


    return 0;
}