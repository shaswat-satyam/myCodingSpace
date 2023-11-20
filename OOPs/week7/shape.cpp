    #include <iostream>
    #include <math.h>
    using namespace std;

    class Shape{
        public:
            double a;
            double b;
            virtual void setdata(){
                cout << "Enter the sides ";
                cin >> a;
                cin >> b;
            }
            virtual double area(){
                cout << "There is no area";
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
        Shape * sptr;
        Shape s1;
        Triangle t1;
        Rectangle r1;

        sptr = &t1;
        sptr->setdata();
        cout << "The area of triangle is " << sptr->area() << endl;

        sptr = &r1;
        sptr->setdata();
        cout << "The area of rectangle is "<<sptr->area() << endl;

       
        return 0;
    }