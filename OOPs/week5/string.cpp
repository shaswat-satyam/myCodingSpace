// Online C++ compiler to run C++ program online
#include <string.h>
#include <iostream>
using namespace std;

class String{
    public:
    string p;
    int length;
    String(){
        cin >> p;
        length = 0;
    }
    String(char s1[]){
        p = s1;
        length = strlen(s1);
    }
    String(String &s1){
        length = s1.length;
        p = s1.p;
    }
    String operator+(String s1){
        length = length + s1.length + 1;
        p.append(s1.p);
        return *this;
    }
    void operator= (String s1){
        length = s1.length + 1;
        p = s1.p;
    }
    int operator<= (String s1){
      int first = 0;
      int second = 0;
      int i = 0;
      while(p[i]){
          first += p[i];
          i++;
      }
      
      i = 0;
      while(s1.p[i]){
          second += s1.p[i];
          i++;
      }
      cout << p << " has a score of " << first << endl;
      cout << s1.p << " has a score of " << second << endl;
      return first <= second;
 
    }
    
    void display(){
        cout << p << endl;
    }
    
    void getLength(){
        int i = 0;
        while(p[i]){
          i++;
        }
        cout << "The length of " << p << " is " << i << endl;
    }
    
    string toLower(){
        int i = 0;
        while(p[i]){
          if(64 < p[i] && p[i] < 91){
              p[i] += 32;
          }
          i++;
        }
        return p;
    }
    
    string toUpper(){
        int i = 0;
        while(p[i]){
          if(64+32 < p[i] && p[i] < 91+32){
              p[i] -= 32;
          }
          i++;
        }
        return p;
    }
};


int main() {
    String s1("Hello");
    String s2("World");
    
    cout << "First String is ";
    s1.display();
    cout << "Second String is ";
    s2.display();
    
    String s3 = s1 + s2;
    cout << "On Adding, the Result is ";
    s3.display();
    
    s1 = s3;
    cout << "Copying, S3 to S1, The Result is ";
    s1.display();
    
    cout << "Comparing s1 and s2, The Result is " << endl;
    if(s1 <= s2){
        cout << "S1 is lesser than or equal to s2" << endl;
    }
    else{
        cout << "S1 is greater than S2" << endl;
    }
    
    
    s1.getLength();
    cout << s1.toLower() << endl;
    cout << s1.toUpper() << endl;
    return 0;
}