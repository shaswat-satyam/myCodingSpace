// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return x*x*x  - 4*x - 9;
}

double funcD(double x){
    return 3*x*x - 4;
}

void newtonRhapson(double x1){
    double h = func(x1)/funcD(x1);
    while( abs(h) >= 0.0001  ){
        h = func(x1)/funcD(x1);
        x1 = x1 - h;
    }
    cout << "The value of the root is :" << x1 << endl;
}

int main() {
    // Write C++ code here
    double Xo = -20;
    newtonRhapson(Xo);
    return 0;
}
