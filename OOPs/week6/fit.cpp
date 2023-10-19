    #include <iostream>
    using namespace std;

    class basic_info{
        string name;
        int roll;
        char sex;
        public:
            void getdata(){
                cout << "Enter the name of student: ";
                cin >> name;
                cout << "Enter the roll number of the student: ";
                cin >> roll;
                cout << "Enter the gender: ";
                cin >> sex;
            }
            void display(){
                cout << name << " has a roll number of " << roll << " has a gender " << sex << endl;
            }
    };

    class physical_fit : public basic_info{
        float height;
        float weight;
        public:
            void getdata(){
                basic_info::getdata();
                cout << "Enter the height (in cm): ";
                cin >> height;
                cout << "Enter the weight (in kg): ";
                cin >> weight;
            }
            void display(){
                basic_info::display();
                cout << "The height is " << height << " and weight is " << weight << endl;
            }
    };


    int main(){
        physical_fit p1;
        p1.getdata();
        p1.display();
    }