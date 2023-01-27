#include <stdio.h>
#include <string.h>


int length(char *str){
    int i =0; 
    while(1){
        if(str[i] == '\0'){
            return i;
        }
        i++;
    }
}

char* catenate(char *str1,char *str2, char *str3){
    int len = length(str1)+length(str2);
    for(int i =0 ; i<length(str1)-1;i++){
        str3[i] = str1[i];
    }
    for(int i =0 ; i <length(str2)-1;i++){
        str3[length(str1)+i] = str2[i];
    }
    str3[len] = '\0';
    return str3;
}

void reverse(char *str){
    for(int i =0; i < (length(str)-1)/2;i++){
        char temp = str[i];
        str[i] = str[length(str)-i-1];
        str[length(str)-i-1] = temp;
    }
}

void copy(char *str1, char *str2){
    for(int i =0; str1[i]&&str2[i];i++){
        str1[i] = str2[i];
    }
}

int main(){
    char str1[50], str2[50], str3[100];
    printf("Enter first String: ");
    fgets(str1, 50, stdin);

    printf("Enter the second string: ");
    fgets(str2, 50, stdin);

    printf("Concatenated string : %s \n",catenate(str1,str2,str3));

    printf("Length of first String : %d \n",length(str1));
    printf("Length of second string : %d \n",length(str2));

    reverse(str1);
    reverse(str2);
    printf("Reverse of first string:%s \n",str1);
    printf("Reverse of second string:%s \n",str2);

    char str4[100];

    copy(str4,str3);
    printf("String :%s",str3);

}




