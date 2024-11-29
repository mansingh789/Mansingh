/*
  Title      :- WAP to get students PCM marks from the user and find the average. Use conditional 
              operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */

#include <stdio.h>

int factorialRecursive(int n) {
if (n == 0 || n == 1) {
return 1;

}
return n * factorialRecursive(n - 1);

}
int factorialIterative(int n) {
int factorial = 1;
int i;
    for ( i = 1; i <= n; i++) {

factorial *= i;

}

   return factorial;
}

int main() {
int num, result;
     printf("\t\tFACTORIAL OF NUMBER\n");
     printf("Enter a number to find its factorial: ");
     scanf("%d", &num);

     if (num < 0) {
     printf("Factorial is not defined for negative numbers.\n");

     } else {
     result = factorialIterative(num);

     printf("Factorial of %d using iterative function is: %d\n", num, result);
     result = factorialRecursive(num);

    printf("Factorial of %d using recursive function is: %d\n", num, result);
}
return 0;

}
