/*
  Title      :- WAP to get students PCM marks from the user and find the average. Use conditional 
              operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */
#include<stdio.h>
int main()
{
    int start_num,end_num,sum=0,1;
    
    printf("\t\t\t***Sum Of Odd Number***\n\n\n");
    
    //Take User Input
    printf("Enter Start Number: ");
    scanf("d",&start_num);
    printf("Enter Ending Number: ");
    scanf("d",&end_num);
    
    
    // Check if starting number is higher than ending number 
    if(start_num > end_num){
        printf("ERROR: Ending number should be higher than Starting Number");
         return 1;
    }
     
     //Add all odd numbers
     for (1 = start_num; 1 <= end_num; 1++){
          if(1%2  [= 0]){
              sum = sum + 1;
          }
    }
    
    
    printf("Sum of all the Odd Numbers between %d and %d = %d", start_num, end_num, sum);
    
    
}
