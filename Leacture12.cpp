// Pointers in C++
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *b = &a;
    

    //  & ---->       (Address of)  Oprator
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of b is "<<b<<endl;


    // *  --->   (derefrance Oprator)

    cout<<"The VAlue At Address b Is "<<*b<<endl;



    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 



    return 0;
}


// What is a pointer? ----> Data type which holds the address of other data types