#include <iostream>
using namespace std;

void PrintArray(int arr[], int size){
    cout << "[";
    for(int i = 0; i < size ;i++){
        if( i == (size-1)){cout << arr[i] << "]" << endl;}
        else{cout << arr[i] << ",";}
    }

}
void LinearSearch(int arr[], int size, int key){
    for(int i=0; i < size;i++){
        if(arr[i]==key){
            cout << "By Linear Search:: KEY ";
            cout << key << " Found at Index " << i << " In The array ";
            PrintArray(arr, size);
            return;
        }
    }
}

void BinarySearch(int arr[], int size, int key){
    int start = 0, end = size -1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            cout << "By Binary Search:: KEY ";
            cout << key << " Found at Index " << mid << " In the array ";
            PrintArray(arr, size);
            return;
        }
        else if(arr[mid] > key){end = mid - 1;}
        else{ start = mid + 1;}
    }
    cout << "By Binary Search:: KEY";
    cout << key << " was not found in the array" << endl;
    PrintArray(arr, size);
    return;
}

int main(){
    int key;
    int arr[7] = {1,2,3,4,5,6,7};
    cout << "Enter the key you want to search in the array ::: ";
    cin >> key;
    LinearSearch(arr,7,key);
    BinarySearch(arr,7,key);
    return 0;
}