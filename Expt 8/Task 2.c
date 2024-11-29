#include <stdio.h>

int main() {
    int rows, colms;
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        printf("Enter the number of columns: ");
        scanf("%d", &colms);

 int matrix1[rows][colms];
 int matrix2[rows][colms];
 int sum[rows][colms];

       printf("Enter elements of the first matrix:\n");
int i;
int j;
           for (i = 0; i < rows; i++) {
           for (j = 0; j < colms; j++)
            {
          scanf("%d", &matrix1[i][j]);
            }
 }

     printf("Enter elements of the second matrix:\n");
         for ( i = 0; i < rows; i++) {
         for ( j = 0; j < colms; j++)
         {
           scanf("%d", &matrix2[i][j]);
         }
 }



 for ( i = 0; i < rows; i++) {
 for ( j = 0; j < colms; j++) {
     sum[i][j] = matrix1[i][j] + matrix2[i][j];
 }

 }
        printf("Sum of the two matrices:\n");
            for ( i = 0; i < rows; i++) {
            for ( j = 0; j < colms; j++) {

   printf("%d ", sum[i][j]);

 }
 printf("\n");

 }
 return 0;

}
