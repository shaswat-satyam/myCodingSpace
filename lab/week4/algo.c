#include <stdio.h>
#include <math.h>
#include <string.h>

int fact(int num);
int rFact(int num);
int fib(int num);
int rFib(int num);
int lSearch(int A[],int size, int key);
int bSearch(int A[],int size, int key);
int rBSearch(int A[],int low, int high, int key);
int* reverse(int a[],int size);
char* rString(char str[]);
int sqr(int num);
int* bubble(int a[],int size);
int* insertion(int A[],int size);
int* selection(int A[],int size);

void display(int A[],int size){
    for(int i =0; i < size;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {25,77,73,63,78,44,90,7,51,41};
    display(arr,10);
    insertion(arr,10);
    display(arr,10);

}

int fact(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}

int rFact(int num){
    if(num < 1)
        return 1;
    else
        return num * rFact(num-1);
}

int fib(int num){
    int a=1,b=0,c=0;
    for(int i = 0 ; i < num ;i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int rFib(int num){
    if(num == 1)
        return 1;
    else if(num == 0)
        return 0;
    else
        return rFib(num -1) + rFib(num -2);
}

int lSearch(int A[],int size, int key){
    for(int i = 0; i < size ; i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}

int bSearch(int A[],int size, int key){
    int low = 0, high = size,mid;
    while(low < high){
        mid = (low+high)/2;
        if(A[mid]==key){
            return mid;
        }
        else if(A[mid]<key){
            low = mid+1;
        }
        else if(A[mid]> key){
            high = mid -1;
        }
    }
    return -1;
}

int rBSearch(int A[],int low, int high, int key){
    int mid = (low+high)/2;
    if(low > high)
        return -1;
    else if(A[mid]==key)
        return mid;
    else if(A[mid]<key)
        return rBSearch(A,mid+1,high,key);
    else if(A[mid]>key)
        return rBSearch(A,low,mid-1,key); 
}

int* reverse(int a[],int size){
    int temp;
    for(int i = 0; i < size/2;i++){
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
    return a;
}

char* rString(char str[]){
    int size = strlen(str);
    char temp;
    char* l,*h;
    l = &str[0];
    h = &str[size-1];

    while(l<h){
        temp = *l;
        *l = *h;
        *h = temp;
        l++;h--;
    }
    return str;
}

int sqr(int num){
    for(int i =1; i<num;i++){
        if(i*i==num){
            return i;
        }
    }
}

int* bubble(int a[],int size){
    int flag,temp;
    for(int i =0; i < size-1; i++){
        flag = 0;
        for(int j =0 ; j < size - i - 1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                flag = 1;
            }
        }
        if(flag==0){
            return a;
        }
    }
}

int* insertion(int arr[],int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int* selection(int A[],int size){
    int min,location,temp;
    for(int i =0;i<size;i++){
        min = __INT_MAX__;
        for(int j =i ; j < size;j++){
                if(A[j]<min){
                    min = A[j];
                    location = j;
                }
            }
        temp = A[location];
        A[location] = A[i];
        A[i] = temp;
    }
    return A;
}