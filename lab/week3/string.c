#include <stdio.h>
#include <string.h>

void strrev(char*str1)
{
//declarevariable
int i,len,temp;
len=strlen(str1);//usestrlen()togetthelengthofstrstring

//useforlooptoiteratethestring
for(i=0;i<len/2;i++)
{
//tempvariableusetotemporaryholdthestring
temp=str1[i];
str1[i]=str1[len-i-1];
str1[len-i-1]=temp;
}
}




int main(){
    char str1[50], str2[50], str3[100];
    printf("Enter first String: ");
    fgets(str1, 50, stdin);

    printf("Enter the second string: ");
    fgets(str2, 50, stdin);

    printf("Concatenated string : %s \n",strcat(str1,str2));

    printf("Length of first String : %lu \n",strlen(str1));
    printf("Length of second string : %lu \n",strlen(str2));

    strrev(str1);
    strrev(str2);
    printf("Reverse of first string:%s \n",str1);
    printf("Reverse of second string:%s \n",str2);


    strcpy(str3,strcat(str1,str2));
    printf("String :%s",str3);

}




