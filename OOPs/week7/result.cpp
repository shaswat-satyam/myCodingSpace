#include <iostream>
using namespace std;

class Student{
    public:
        int roll;
        string name;
        void setdata(){
            cout << "Enter the Roll Number : ";
            cin >> roll;
            cout << "Enter the Name :";
            cin >> name;
            }
            
        void getdata(){
            cout << name << " has a roll number : " << roll;
        }
};

class Exam : public Student{
    public:
        int marks[6];
        
        void setdata(){
            cout << "Enter the Marks";	
            for(int i = 0; i < 6; i++){
                cin >> marks[i];
            }
        }
        
        void getdata(){
            for(int i = 0; i < 6; i++){
                cout << marks[i] << " ";
            }
            cout << endl;
        }

};

class Result: public Exam{
    int total;
    public:
        void setdata(){
            cout << "Enter the Roll Number : ";
            cin >> roll;
            cout << "Enter the Name :";
            cin >> name;

            cout << "Enter the six Marks" << endl;	
            for(int i = 0; i < 6; i++){
                cin >> marks[i];
            }

            total = 0;
            for(int i = 0; i < 6; i++){
                total += marks[i];
            }
        }
        
        void getdata(){
            cout  << name << " has a roll number "<< roll << endl ;
            
            cout << "The Marks are :";
            
            for(int i = 0; i < 6; i++){
                cout << marks[i] << " ";
            }
            cout << endl;
            
            cout << "The Total Marks are :" << total << endl;
        }
};

int main(){

    Result r1;
    r1.setdata();
    r1.getdata();
    return 0;
}