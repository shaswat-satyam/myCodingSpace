#include <iostream>
#include <math.h>
using namespace std;


double f(double x){
    return cos(x)- x * pow(2.712,x);
}



int main (){
    double x, x1, xn, aerr;
    int itr = 2;
    cout << "Enter inital guess x0 and x1" << endl;
    cin >> x >> x1;
    if(f(x)*f(x1) > 0){
        cout << "Wrong Guess" << endl;
        return 1;
    }
    else{
        cout << "Enter the Approximate error" << endl;
        cin >> aerr;
        while(abs(x1-x) > aerr){
            xn = x1-((x1-x)/(f(x1)-f(x))*f(x1));
            cout << "The value of x" << itr++ << " is " << xn << endl;
            if(f(x1) == f(x) ){
                cout << "The root is converging to approximation";
                return 0;
            }
            x = x1;
            x1 = xn;
        }
    }

    cout << "The root is " << xn << endl;
    return 0;
}