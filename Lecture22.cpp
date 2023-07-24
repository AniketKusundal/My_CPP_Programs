//  -->    OOPs    Recap   &       Nesting     of      Member      Functions       in          C++   <--

#include<iostream>
#include<string.h>
using namespace std;

class binary {

    private:      // By Defualt class member is private
        string s;
        // void chk_bin(void);

    public:

        void read(void);
        void chk_bin(void);
        void once_compliment(void);
        void display (void);

};
    void binary::read(void)
    {
        cout << "Enter a binary number" << endl;
        cin >> s;
    };


    void binary ::chk_bin(void) 
    {
        for (int i = 0; i <s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout<<"Incorrect Binary Format "<<endl<<endl;

            }
            
        }
        
    }



    void binary::once_compliment(void)
    {
        chk_bin();
        for (int i = 0; i <s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else{
                s.at(i) = '0';
            }
            
        }
        
    }



    void binary::display(void)
    {
        cout<<"Displaying Your Binary Numbers "<<endl<<endl;

        for (int i = 0; i <s.length(); i++)
        {
            cout<<s.at(i);
        }
        cout<<endl;
        
    }





int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.once_compliment();
    b.display();



    return 0;
}