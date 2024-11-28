/*
  Title      :- WAP to get students PCM marks from the user and find the average. Use conditional 
              operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */
#include <stdio.h>
int main()
{
    int phy ,chem ,math ,avg;

    printf("\t\t\t***Student Eligibility calculator***\n\n\n");
    printf("Enter Physics Marks :");
    scanf("%d",&phy);
    printf("\nEnter Chemistry Marks :");
    scanf("%d",&chem);
    printf("\nEnter Maths Marks :");
    scanf("%d",&math);

    avg=(phy+chem+math)/3;

    printf("PCM Average = %d\n", avg);
    avg>=50?printf("You Are Eligible for admission"):printf("You Are Not Eligible For Adimission ");

    return 0;

}
