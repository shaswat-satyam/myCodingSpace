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

    int stringLength(){
        int length = 0;
        while(p[length]){
            length++;
        }
        return length;
    }

    void toLower(){
        int length = 0;
        while(p[length]){
            if('A' <= p[length] && p[length] <= 'Z'){
                p[length] += 32;
            }
            length++;
        }
        
    }

    void toUpper(){
        int length = 0;
        while(p[length]){
            if('a' <= p[length] && p[length] <= 'z'){
                p[length] -= 32;
            }
            length++;
        }
        
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