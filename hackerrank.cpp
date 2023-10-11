#include <iostream>
#include <climits>
using namespace std;

int main(){
    int itr;
    cin >> itr;
    double num[itr]; 
    for(int i = 0; i < itr ; i++){
        cin >> num[i];
    }

    for(int i = 0 ; i < itr;i++){
        if(LLONG_MIN > num[i] || num[i] > LLONG_MAX ){
            cout << num[i] << " can't be fitted anywhere";
        }
        else{
            cout << num[i] << " can be fitted in:" << endl;
            if(CHAR_MIN <= num[i] && num[i] <= CHAR_MAX){
                cout << "* char" << endl;
            }
            if(SHRT_MIN <= num[i] && num[i] <= SHRT_MAX){
                cout << "* short int" << endl;
            }
            if(INT_MIN<= num[i] && num[i] <= INT_MAX){
                cout << "* int" << endl;
            }
            if(LONG_MIN <= num[i] && num[i] <= LONG_MAX){
                cout << "* long int" << endl;
            }
            if(LLONG_MIN  <= num[i] && num[i] <= LLONG_MAX){
                cout << "* long long int" << endl;
            }
        }
    }
}

