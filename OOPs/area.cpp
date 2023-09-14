        #include <iostream>
        #include <math.h>
        using namespace std;

        float area(float radius){
        return 3.14 * radius * radius;
        }

        float area(float length, float breath){
        return length * breath;
        }

        float area(float a, float b, float c){
        float s = (a+b+c)/3;
        
        return sqrt(s*(s-a)*(s-b)*(s-c));
        }

        int main(){
        float radius = 5;
        float len = 15, bre = 7.5;
        float a = 5, b = 8, c = 9; 
        
        cout << "Area of a circle with radius " << radius << " is " << area(radius) << endl;
        cout << "Area of a rectangle with length " << len << " and breadth "<< bre << " is " << area(len,bre) << endl;
        cout << "Area of a Triangle with sides " << a << " " << b << " " << c << " is " << area(a,b,c) << endl;


        return 0;
        }