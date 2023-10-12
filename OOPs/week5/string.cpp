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
    String operator+(const String &s, const String &t){
        String temp;
        temp.len = s.len + len;
        temp.p = new char[temp.len+1];
        strcpy(temp.p,s.p);
        strcat(temp.p,t.p);
        return temp;
    }

    String operator<=(const String &s, const String &t){
        
    }

};


int main(){
    String s1("Hello World");
    cout << s1.p << " has a length of "<< s1.stringLength() << endl;
    cout << s1.p << " in lower case is ";
    s1.toLower(); 
    cout << s1.p << endl;
    cout << s1.p << " in upper case is ";
    s1.toUpper(); 
    cout << s1.p << endl;
}