#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,-1,-2,-3,-4,-5,-6,-7,-8,-9,6,5,5,7,3,5,7,8,9,4};
    int p = 0, n = 0, max = a[0], min = a[0], sum = 0;

    for(int x:a){
        if(x > 0){
            p += 1;
        }
        else{
            n += 1;
        }
    }

    cout << "The positive no is: " << p << "  The negative no is: " << n << endl;

    for(int x:a){
        if(x > max){
            max = x;
        }
    }
    cout << "The Max value is : " << max << endl;

    for(int x:a){
        if(x < min){
            min = x;
        }
    }
    cout << "The Min value is : " << min << endl;

    for(int x:a){
        sum += x;
    }
    cout << "The Sum is : " << sum << endl;

    sum = 0;
    int count = 1;

    for(int x:a){
        sum += x;
        count += 1;
    }

    cout << "Average of the array : " << (float) sum/count << endl;
}