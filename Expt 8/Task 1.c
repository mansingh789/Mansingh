/*
  Title      :-WAP to find the length of a string without using library function.

  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */
#include<stdio.h>
int main(){


    int len=0;
    char str[len];
    printf("\tFINDING STRING LENTH\n\n");
    printf("Enter Your String: ");
    gets(str);

    while(str[len]!='\0'){
          len++;
    }

    printf("Your String Length has %d Character(s)\n",len);

    return 0;

}
