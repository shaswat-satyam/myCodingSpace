#include <iostream>
#include <cstring>
using namespace std;


class String{
    public:
    int len;
    char * p;
    String(){
        cin >> p;
        len = strlen(p);
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
        char * temp = p;
        while(temp){
            if('A' <= *temp && *temp <= 'Z'){
                *temp += 32;
            }
            temp++;
        }
        
    }

    void toUpper(){
        char * temp = p;
        while(temp){
            if('a' <= *temp && *temp <= 'z'){
                *temp -= 32;
            }
            temp++;
        }
        
    }
};


int main(){
    String s1;
    cout << s1.p << " has a length of "<< s1.stringLength() << endl;
    cout << s1.p << " in lower case is ";

    s1.toLower(); 
    // cout << s1.p << endl;
    // cout << s1.p << " in upper case is ";
    // s1.toUpper(); 
    // cout << s1.p << endl;
}