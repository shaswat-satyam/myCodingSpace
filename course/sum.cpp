#include <iostream>
using namespace std;

int main(){
    int n, sum;

    cout << "Enter the number of natural numbers : ";
    cin >> n;

    for( int i = 1; i <= n; i++){
        sum += i;
    }
    cout <<"The Sum of "<< n <<" natural numbers is : " << sum << endl;
}