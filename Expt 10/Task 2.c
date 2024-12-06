/*
    EXP NO: 10 Task2
Title:- WAP to print the elements of an array in reverse order using pointers
Name:-ManSingh Chauhan
Division. :-F.E.(ECS) - E
Roll No :- 17
UIN :- 241S018
*/

#include <stdio.h>
int main() {
    int n;
      printf("Enter the number of elements in the array: ");
      scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
         printf("Enter %d elements:\n", n);

int i;
   for (int i = 0; i < n; i++) {
  scanf("%d", ptr + i);
}
   printf("Array elements in reverse order:\n");
    
   for (int i = n - 1; i >= 0; i--) {
       printf("%d ", *(ptr + i));
}
  printf("\n");

    return 0;
}

/* OUTPUT : Enter the number of elements in the array: 5
Enter 5 elements:
1
2
3
4
5
Array elements in reverse order:

5 4 3 2 1

*/
