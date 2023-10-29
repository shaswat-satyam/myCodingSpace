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
    
    result = (h*f(a))/2;
    cout << "The value in iteration 0 is " << result << endl;
    
    for(int i = 1; i < n; i++){
        result += (h*f(a+i*h));
        cout << "The value in iteration "<< i << " is " << result << endl;
    }
    result += (h*f(b))/2;
    cout << "The value in iteration "<< n-1 <<" is " << result << endl;

    cout << endl << "The final result is " << result <<" taking h as "<< h << endl;

}