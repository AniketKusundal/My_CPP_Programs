//    Function Overloading   ----->

#include<iostream>

using namespace std;

int sum (int a , int b){
    return a + b ;
}

int sum (int a , int b ,int c){
    return a + b + c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}

int main()
{
    cout<<"The Sum Of 10 and 10 : "<<sum(10,10)<<endl;
    cout<<"The Sum Of 10 and 10 , 10 : "<<sum(10,10,10)<<endl;
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;

    return 0;

}