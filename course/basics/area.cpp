#include <iostream>
using namespace std;

int main(){
    float height, base, area;

    cout<<"Enter the height of the triangle : ";
    cin >> height;
    cout<<"Enter the base of the triangle : ";
    cin >> base;

    area = 0.5 * height * base;
    cout <<"The area is : "<< area << endl;
}