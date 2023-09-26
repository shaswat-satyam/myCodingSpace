        #include <iostream>
        #include <cstring>
        using namespace std;

        class student{
        char name[30];
        char branch[5];
        int roll;
        int age;
        int sub[5];
        public:
        student(){
            cout << "Enter the name of student" << endl;
            cin >> name;
            cout << "Enter the branch of student" << endl;
            cin >> branch;
            cout << "Enter the roll number of student" << endl;
            cin >> roll;
            cout << "Enter the age of student" << endl;
            cin >> age;
            cout << "Enter the marks of 5 subjects" << endl;
            for(int i = 0; i < 5;i++){
                cin >> sub[i];
            }
        };

        void isGood(){
            int sum  = 0;
            float avg;
            for(int i = 0; i < 5;i++){
                sum += sub[i];
            }
            avg = sum / 5.0f;
            if(avg > 70){
            cout << name << " has a great marks " << avg << "%" << endl;
            }
            else{
            cout << name << " has a bad marks " << avg << "%" << endl;
            }
            return;
        };
        };


        int main(){
        student s1;
        s1.isGood();

        
        return 0;
        }