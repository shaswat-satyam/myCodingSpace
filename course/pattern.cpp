#include <iostream>
using namespace std;

int main(){
    cout << "Give the side length: ";
    int side;
    cin >> side;
    cout << endl;

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            if( i >= j)
            cout <<"* ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            if( i <= j)
            cout <<"* ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            if ( i > j){
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            if ( i + j >= side-1){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    int count = 1;

    for(int i = 0; i < side; i++){
            for(int j = 0; j < side; j++){
                cout << count << " ";
                count += 1;
            }
            cout << endl;
        }

}