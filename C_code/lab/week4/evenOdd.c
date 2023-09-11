#include <stdio.h>

FILE *fp, *fo,*fe,*f;
int num;

int primality(int n){
    for(int i = 2; i < n-1;i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int odd=0,even=0,prime=0;
    fp = fopen("numbers.txt","r+");
    fo = fopen("odd.txt","w");
    fe = fopen("even.txt","w");
    f = fopen("prime.txt","w");
    int status = fscanf(fp,"%d",&num);
    while(status != -1){
        status = fscanf(fp,"%d",&num);
        if(num % 2 == 0)
            fprintf(fe,"%d ",num);
        else
            fprintf(fo,"%d ",num);

        if(primality(num))
            fprintf(f,"%d ",num);
    }
    return 0;
}