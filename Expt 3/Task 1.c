/* Experiment No:- 17
  Title      :-WAP to design a menu driven calculator using switch 
  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */

#include <stdio.h>

 int main() {
     printf("\t\t\t\t\t*****Menu Driven Calculator*****\n");
     float a, b, result;
     char operation, cont;
  
     printf("+:-Addition\n");
     printf("-:-Subtraction\n");
     printf("*:-Multiplication\n");
     printf("/:-Division\n");
     printf("%%:-Modolus\n");
  
 Start: // Label for goto
 
 // Enter any number and operation.
 printf("Enter the Num-1:-");
 
 scanf("%f", &a);
 
 printf("Enter the Num-2:-");
 
 scanf("%f", &b);
 
 printf("Enter the operation:-");
 
 scanf(" %c", &operation);
 
 switch (operation) {
 case '+':
     result = a + b;
     printf("%.2f + %.2f = %.2f\n", a, b, result);
     break;
 
 case '-':
     result = a - b;
     printf(" %.2f - %.2f = %.2f\n", a, b, result);
     break;
 
 case '*':
     result = a * b;
     printf("%.2f * %.2f = %.2f\n", a, b, result);
     break;
 
 case '/':
 if (b != 0) {
     result = a / b;
     printf("%.2f / %.2f = %.2f\n", a, b, result);
 }   else {
     printf("Error:-Division by zero is not allowed.\n");
 }
 break;
 
 case '%':
     result = (int)a % (int)b;
     printf("%.2f mod %.2f = %.2f\n", (int)a, (int)b, (int)result);
     break;
 
 default:
     printf("Invalid Operation\n");
     return 0;
 }
 printf("Continue ? (Y/N):");
 scanf(" %c", &cont);
 if (cont == 'T') {
 printf("Thank you for using Calculator");
 return 0;
 }
    goto Start; // Go back to start of the menu
 return 0;
 }
