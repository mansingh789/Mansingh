/* EXP NO : 10 Task 1
Title :-WAP to print your name, age, class, division and UIN on the screen. Use
escape sequences to properly format the output.
Name Mansingh Chauhan
Division. :-F.E.(ECS) - E
Roll No :- 17
UIN :- 241S018
*/
#include <stdio.h>
int main() {
int num1, num2, sum;
int *ptr1, *ptr2, *ptrSum;
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
ptr1 = &num1;
ptr2 = &num2;
ptrSum = &sum;
*ptrSum = *ptr1 + *ptr2;
printf("Sum of %d + %d = %d\n", *ptr1, *ptr2, *ptrSum);
return 0;
}
/* OUTPUT : Enter the first number: 10
Enter the second number: 20
Sum of 10 + 20 = 30
*/
