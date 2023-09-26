        

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class complex{
    int real;
    int img;
    public:
        complex(){
            cout << "Enter the real part:";
            cin >> real;
            cout << "Enter the imagnary part:";
            cin >> img;
        }
        
        complex(int val){
            real = val;
            img = val;
        }
        
        complex(int r, int i){
            real = r;
            img = i;
        }
        
        void display(){
            cout << "The number is " << real << "+i" << img << endl;
        }
    
    
};

int main()
{
    complex c1;
    c1.display();
    complex c2(5);
    c2.display();
    complex c3(4,9);
    c3.display();
    return 0;
}

