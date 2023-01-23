#include <iostream>
using namespace std;

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int key,choice;
    int l = 0,h = 9, mid = 0;

    cout << "Enter the key : ";
    cin >> key;
    cout << "Enter your choice for Linear Search(0) or Binary Search(1) : ";
    cin >> choice;

    if( choice == 0){
        for(int i = 0; i < 10; i++){
            if(key == a[i]){
                cout << "The Key is found at " << i << endl;
                return 0;
            }
        }
        cout << "Error 404: key not found" << endl;
        return 0;
    }

    else{
        while( l <= h){
            mid = (l+h)/2;
            if(key == a[mid]){
                cout << "The key is found at " << mid << endl;
                return 0;
            }

            else if ( key > a[mid]){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }

        }
    }
    cout << "Error 404: key not found"<< endl;
}