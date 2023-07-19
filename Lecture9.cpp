//       Control Structures, If Else and Switch-Case Statement

#include<iostream>
using namespace std;

int main()
{
    //  [1]   SELECTION CONTROL STRUCTURE : If-else Laddder, IF-ELSE.
    int age;
    cout<< "Welcome To  NIGHT--LIGHTS--CLUB"<<endl;
    cout<<"Enter Your Age To Get Pass For Entering In Club"<<endl;
    cin>>age;

    if (age>18)
    {
        cout<<"Your Premium  Pass is Verfied Now You Can Enter In CLub"<<endl;
    }

    else if (age==18)
    {
        cout<<"Your Age is 18 You Get Classic Pass, Now You Can Enter The Clud "<<endl;
    }

    else
    {
        cout<<"Sorry , Your Age Is Below 18 You Can Not Enter in The Clud"<<endl;
    }






   // [2]   SELECTION CONTROL STRUCTURE :   SWITCH - CASE.
   int age ;

   cout<<"Tell Me Your Age"<<endl;
   cin>>age;
       
       switch (age)
       {
       case 18 :
        cout<<"Your Age Is 18";
        break;

        case 20 :
        cout<<"Your Age Is 20";
        break;

        case 22 :
        cout<<"Your Age Is 22";
        break;

        case 24 :
        cout<<"Your Age Is 24";
        break;

        case 25: 
        cout<<"Your Age Is 25";
        break;
       
        default :
        cout<<"No Speciall Cases";
        break;

        cout<<"Done With Switch-Case";
        return 0;
       }


    
    
    
   
}