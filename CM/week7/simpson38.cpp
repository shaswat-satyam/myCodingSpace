#include <iostream>
using namespace std;

double f(double x){
    return 1/(1+x*x);
}

int main(){
    double a,b;
    int n, i = 0;
    cout << "Enter the integrating interval ";
    cin >> a;
    cin >> b;
    cout << "Enter the number of intervals ";
    cin >> n;
    double result = 0;
    double h = (b-a)/n ;
    
    result = (3*h*f(a))/8;
    cout << "The value in iteration 0 is " << result << endl;
    
    for(int i = 1; i < n; i++){
        if (i%3 == 0){
            result += (6*(h*f(a+i*h)))/8;
        }
        else{
            result += (9*(h*f(a+i*h)))/8;
        }
        cout << "The value in iteration "<< i << " is " << result << endl;
    }
    result += (3*h*f(b))/8;
    cout << "The value in iteration "<< n-1 <<" is " << result << endl;

    cout << endl << "The final result is " << result <<" taking h as "<< h << endl;
    return 0;
}