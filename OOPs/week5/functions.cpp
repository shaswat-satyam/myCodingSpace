#include <iostream>
using namespace std;



int stringLength(char s[]){
    int length = 0;
    while(s[length]){
        length++;
    }
    return length;
}

void toLower(char s[]){
    int i = 0;
    while(s[i]){
        if('A' <= s[i] && s[i] <= 'Z'){
            s[i] += 32;
        }
        i++;
    }
    
}

void toUpper(char s[]){
    int i = 0;
    while(s[i]){
        if('a' <= s[i] && s[i] <= 'z'){
            s[i] -= 32;
        }
        i++;
    }
    
}


int main(){
    char s1[] = "Hello World";
    cout << s1 << " has a length of "<< stringLength(s1) << endl;
    cout << s1 << " in lower case is ";
    toLower(s1); 
    cout << s1 << endl;
    cout << s1 << " in upper case is ";
    toUpper(s1); 
    cout << s1 << endl;
}