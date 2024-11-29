#include<stdio.h>
int main(){


    int len=0;
    char str[len];
    printf("Enter Any String: ");
    gets(str);

    while(str[len]!='\0'){
          len++;
    }

    printf("Your String's Length is %d",len);

    return 0;

}
