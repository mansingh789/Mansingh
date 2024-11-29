#include <stdio.h>

int main() {
    int num;
    printf("\t\tLARGEST ELEMENT FINDER\n\n ");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

int arr[num];
    printf("Enter %d elements:\n", num);
int i;
       for ( i = 0; i < num; i++)
        {
        scanf("%d", &arr[i]);
        }

int largest = arr[0];
     for( i = 1; i < num; i++)
        {
          if (arr[i] > largest)
        {

largest = arr[i];

}

}

printf("The largest element in the array is: %d\n", largest);
return 0;

}
