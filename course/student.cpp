#include <iostream>
using namespace std;

class Student{
    private:
        int Roll;
        string Name;
        int Marks[3];
    public:
        void setRoll(int r){
            if (r>0?Roll=r:Roll=0);
        };
        void setName(string name){
            Name = name;
        };
        void setMarks(int * a[3]){
            for(int i = 0; i < 3; i++){
                Marks[i] = a[i];
            }
        };
        Student(int r, string n, int m[3]){
            setName(n);
            setRoll(r);
            setMarks(m);
        }
        int totalMarks(){
            int total = 0;
            for(int x :Marks){
                total += x;
            }
            return total;
        };
        char *grade(){
            char grade[3];
            for(int i = 0; i < 3; i++){
                if( Marks[i] > 70){
                    grade[i] = 'A';
                }
                else if( Marks[i] > 60){
                    grade[i] = 'B';
                }
                else if ( Marks[i] > 50){
                    grade[i] = 'C';
                }
                else if ( Marks[i] > 40){
                    grade[i] = 'D';
                }
                else{
                    grade[i] = 'F';
                }
            }
            return grade;
        }


};


int main(){
    cout << "Hello World";
    int marks[3] = {60,98,78};
    int *ptr = marks;
    Student s1(1,"Sam",ptr);
}