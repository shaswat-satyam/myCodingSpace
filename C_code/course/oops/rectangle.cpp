#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
    private:
        int length;
        int breadth;
    public:
        rectangle(int l = 0, int b = 0){
            setLength(l);
            setBreadth(b);
        };
        void setLength(int a){
            a > 0 ? length = a : length = 1;
        };
        void setBreadth(int a){
            a>0?breadth = a : breadth = 1;
        };
        int getLength(){
            return length;
        };
        int getBreadth(){
            return breadth;
        };
        int area(){
            return length * breadth;
        };
        float diagonal(){
            return (float) sqrt(length * length + breadth * breadth);
        };
        bool isSquare(){
            return length == breadth;
        };
        ~rectangle(){
            cout<<"Rectangle destroyed ";
        };
};


int main(){
    rectangle r(3,4);
    cout << r.getLength() <<" "<< r.getBreadth() << endl;
    cout << r.area() << endl;
    cout << r.isSquare() << " " << r.diagonal() << endl;
 }