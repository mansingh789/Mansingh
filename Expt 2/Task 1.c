/*
  Title      :- WAP to get students PCM marks from the user and find the average. Use conditional 
              operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */
#include<stdio.h>
   int main(){
       
       int num;
        printf("Enter Number: ");
        scanf("%d",&num);

        if(num%2==0){
            printf("%d is Even",num);
        }else{
            printf("%d is Odd",num);
        }

        return 0;
   }
   
