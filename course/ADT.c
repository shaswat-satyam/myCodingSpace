#include <stdio.h>
#include <stdlib.h>

struct array{
    int A[20];
    int size;
    int length;
};



void insert(struct array *arr, int x, int index){
    for( int i = (arr->length)+1; i > index; i--)
    {
        arr->A[i] = arr->A[i-1];
    }
    arr->length++;
    arr->A[index] = x;
}

void append(struct array *arr, int x){
    arr->A[arr->length] = x;
    arr->length++;
}

void display(struct array arr){
    for(int i = 0; i < arr.length; i++){
        printf("%d ",arr.A[i]);
    }
    printf("\n");
}

void delete(struct array *arr, int index){
        for(int i = index;i < arr->length ;i++){
            arr->A[i]= arr->A[i+1];
        }
        arr->length--;
}

int lSearch(struct array arr,int key){
    for(int i = 0; i < arr.length; i++){
        if(arr.A[i] == key){
            printf("The %d was found on the %d position \n",key,i);
            return 0;
        }
    }
    printf("The %d was not found \n", key);
    return 1;
}

int bSearch(struct array arr, int key){
    int l,mid,h;
    l =0;
    h = arr.length-1;

    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h = mid-1;
        else
            l=mid+1;
    }

    if(arr.A[mid] == key){
        printf("%d was found at %d \n",key,mid);
    }
    else{
        printf("%d was not found \n",key);
    }
    return -1;
}

int rBinSearch(int a[], int l, int h,int key){
    int mid;

    if(l<=h){
        mid = (l+h)/2;

        if(key == a[mid]){
            return mid;
        }
        else if(key < a[mid]){
            return rBinSearch(a, l, mid-1,key);
        }
        else if(key > a[mid]){
            return rBinSearch(a,mid+1,h,key);
        }
    }

    return -1;
}


int sum(struct array arr){
    int sum = 0;
    for(int i = 0; i < arr.length; i++){
        sum += arr.A[i];
    }
    return sum;
}

int get(struct array arr,int index){
    return arr.A[index];
}

void set(struct array *arr,int index, int value){
    arr->A[index] = value;
}

int avg(struct array arr){
    int average = 0;
    for(int i =0; i < arr.length; i++){
        average += arr.A[i];
    }

    return (average/arr.length);
}

int max(struct array arr){
    int max;
    max = arr.A[0];
    for(int i =0; i<arr.length;i++){
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
}

void reverse(struct array *arr){
    int temp[arr->length];
    for(int i = 0; i<arr->length;i++ ){
        temp[i] = arr->A[i];

    }
    for(int i = arr->length;i >=0 ;i--){
        arr->A[arr->length-1 - i] = temp[i];
    }
}

void sort(struct array arr){
    for(int i = 0; i < arr.length-2;i++){
        if(arr.A[i]> arr.A[i+1]){
            printf("Array is Not sorted\n");
            return;
        }
    }
    printf("Array is sorted\n");
}
void merge(struct array *arr1,struct array *arr2){
    for(int i = 0; i < arr2->length; i++){
        arr1->A[arr1->length+i] = arr2->A[i];
        arr2->A[i] = -1;
    }
    arr1->length += arr2->length;
    arr2->length = 0;
}


int main(){
    struct array arr1 = {{1,2,3,4,5},10,5};
    struct array arr2 = {{7,8,9},10,3};
    merge(&arr1,&arr2);

    display(arr1);
}