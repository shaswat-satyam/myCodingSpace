using namespace std;
#include <iostream>

class student{
    public:
        char name[30];
        int sub[5];
      student(){
      }
      student(int arr[]){
        for(int i =0; i < 5;i++){
            sub[i] = arr[i];
          }
      }
      void setData(){
        cout << "Enter the name of the student:";
        cin >> name;
        cout << "Enter the marks for 5 subjects:";
        for(int i =0; i < 5;i++){
            cin >> sub[i];
          }
      }
      float avg(){
        int sum = 0;
        for(int i =0; i < 5;i++){
          sum += sub[i];
        }
        return sum/5.0f;
      }
};

int main(){
    int size = 0;
    cout << "Enter the number of students:";
    cin >> size;
  student Class[size];
  for(int i =0; i < size;i++){
          Class[i].setData();
  }
  for(int i =0; i < size;i++){
          cout << Class[i].name << " has a percentage of "<< Class[i].avg() << endl;
  }
  
  return 0;
}
