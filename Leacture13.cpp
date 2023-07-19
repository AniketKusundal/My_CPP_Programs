// Arrays & Pointers Arithmetic

#include <iostream>

using namespace std;

int main()
{

    //  First Way To declare Array
    int marks[] = {23, 45, 56, 89};
    // cout << "First Way To  Declare Array " << endl;
    // cout << "These Are Marks" << endl;
    // // cout << marks[0] << endl;
    // // cout << marks[1] << endl;
    // // cout << marks[2] << endl;
    // // cout << marks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    //  Seccond Way To Deaclare Array
    // int mathMark[4];
    // mathMark[0] = 50;
    // mathMark[1] = 60;
    // mathMark[2] = 70;
    // mathMark[3] = 80;

    // cout << "Second Way To  Declare Array " << endl;
    // cout << "These are math marks" << endl;
    // cout << mathMark[0] << endl;
    // cout << mathMark[1] << endl;
    // cout << mathMark[2] << endl;
    // cout << mathMark[3] << endl;



    int* p = marks;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 



    return 0;
}