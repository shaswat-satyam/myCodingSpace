#include <iostream>
using namespace std;

float lagrange(int x, int xn, int n, int a[]){
    float res = 1;
    for(int i = 0; i < n; i++){
        if(i != xn){
            res *= (x-a[i]);
        }
    }
    return res;
}

int main(){
    int a[] = {5,7,11,13,17};
    int fx[] = {150,392,1452,2366,5202};
    int val;
    float func = 0;
    cout << "Input value of x:";
    cin >> val;
    for(int i = 0; i < 5;i++){
        func += (lagrange(val,i,5,a)/lagrange(a[i],i,5,a)) * fx[i];
    }
    cout << "The value of f(" <<  val << ") is " << func << endl;
    return 0;
}