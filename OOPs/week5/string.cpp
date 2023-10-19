#include <iostream>
#include <cstring>
using namespace std;


class String{
    public:
    int len;
    char * p;
    String(){
        p = 0;
        len = 0;
    }
    String(const char *s1){
        len = strlen(s1);
        p = new char[len+1];
        strcpy(p,s1);
    }
    String(const String &s1){
        len = s1.len;
        p = new char[len+1];
        strcpy(p,s1.p);
    }
    String operator +(const String &s){
        String temp;
        temp.len = s.len + len;
        temp.p = new char[temp.len+1];
        strcpy(temp.p,p);
        strcat(temp.p,s.p);
        return temp;
    }

    void operator =(const String &s){
        len = s.len;
        p = new char[s.len+1];
        strcpy(p,s.p);
    }

    int operator <= (const String &s){
        int m = strlen(s.p);
        int n = strlen(p);
        if(m <= n){
            return 1;
        }
        else{
            return 0;
        }
    }

};


int main(){
    String s1("Hello");
    String s2("World");
    cout << "First String is " << s1.p << endl;
    cout << "Second String is " << s2.p << endl; 
    String s3 = s1+s2;
    cout << "Adding first and second, we get " << s3.p << endl;
    s1 = s3;
    cout << "Copying third string to first string " << s1.p << endl;
    int compare = s2 <= s3;
    cout << "Comparing second and third string " << compare << endl;
}