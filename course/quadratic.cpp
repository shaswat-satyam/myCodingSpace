#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,det,r1,r2;
    cout<<"Enter a,b,c" << endl;
    cin>>a>>b>>c;
    det = b*b - 4*a*c;
    if(det>0){
        r1 = (-b+sqrt(det))/(2*a);
        r2 = (-b-sqrt(det))/(2*a);

        cout << "The roots are " << r1 <<" and "<< r2 << endl;
    }
    else{
        r1 = (-b)/(2*a);
        int i1 = sqrt(abs(det))/(2*a);

        r2 = (-b)/(2*a);
        int i2 = sqrt(abs(det))/(2*a);

        cout<< "The Roots are " << r1 << "+i"<< i1 <<" and "<< r2 << "-i" << i2 << endl;
    }

}