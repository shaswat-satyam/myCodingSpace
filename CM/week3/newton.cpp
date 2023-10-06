#include <iostream>
// #include <conio.h>
// #include <iomanip.h>

#include <math.h>
using namespace std;


float f(float x){
    return x*x*x - 4*x -9;
}

float df (float x){
    return 3*x*x -4;
}

int main (){
    int itr, maxitr, fixed;
    float h,x0,x1,aerr;
    
    cout << "Enter x0,allowed error and maximum iterations" <<endl;
    
    cin >> x0 >> aerr >> maxitr;

    
    for(itr = 0 ;itr < maxitr; itr++ ){
        h = f(x0)/df(x0);
        cout << "Iteration no." <<  itr << ", X= "<< x0 << ", h = "<< h <<endl;
        if (abs(h)< aerr){
            cout << "After " << itr << " iterations, root = "<< x0 << endl;
            return 0;
        }
        x0 = x0 - h;
    }
    cout << "Iterations not sufficient or Solution does not converge!" << endl;
    
    return 1;

}