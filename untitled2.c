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
