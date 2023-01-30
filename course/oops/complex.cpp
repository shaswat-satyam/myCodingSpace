#include <iostream>
using namespace std;

class complex{
    private:
        int real;
        int imaginary;
    public:
        complex(int r = 0,int i = 0){
            cout << "Enter the numbers";
            cin >> r >> i;
            real = r;
            imaginary = i;
        }
        void set(int r = 0,int i = 0){
            
            real = r;
            imaginary = i;
        }

        void sum(class complex c){
            real += c.real;
            imaginary += c.imaginary;
        }

        void difference(class complex c){
            real -= c.real;
            imaginary -= c.imaginary;
        }

        void mul(class complex c){
            real = real*c.real-imaginary*c.imaginary;
            imaginary = real*c.imaginary+ imaginary*c.real;
        }

        void display(){
            if(imaginary > 0)
                cout << real << " + " << imaginary << "i \n";
            else
                cout << real << " " << imaginary << "i \n";
        }
};

int main(){
    complex c1(15,20),c2(20,30);
    c1.display();
    c2.display();

    c1.mul(c2);
    c1.display();
    return 0;
}