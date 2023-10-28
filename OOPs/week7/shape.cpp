    #include <iostream>
    #include <math.h>
    using namespace std;

    class Shape{
        public:
            double a;
            double b;
            void setdata(){
                cout << "Enter the sides ";
                cin >> a;
                cin >> b;
            }
            float area(){
                cout << "Ther is no area";
                return 0;
            }
    };


    class Triangle : public Shape{
        public:
            double c;
            void setdata(){
                cout << "Enter the sides ";
                cin >> a;
                cin >> b;
                cout << "Enter the third Side ";
                cin >> c;
            }
            double area(){
                double s = (a+b+c)/2;
                return sqrt(s*(s-a)*(s-b)*(s-c));
            }
    };

    class Rectangle : public Shape{
        public:
            void setdata(){
                cout << "Enter the sides ";
                cin >> a;
                cin >> b;
            }

            double area(){
                return a*b;
            }
    };




    int main(){
        Triangle t1;
        t1.setdata();
        cout << "Area of the triangle is " << t1.area() << endl;
        Rectangle r1;
        r1.setdata();
        cout << "Area of the rectangle is " << r1.area() << endl;
        return 0;
    }