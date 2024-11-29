/*
  Title      :- WAP to find all the prime numbers
between two numbers.
  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */
#include <stdio.h>

int isPrime(int num){
if (num < 2){
return 0;

}
int i;
for (i = 2; i * i <= num; i++){
if (num % i == 0)

{
return 0;

}

}
return 1;
}

void findPrimes(int start, int end){

printf("Prime numbers between %d and %d are:\n", start, end);
int i;
for ( i = start; i <= end; i++)
{
if (isPrime(i))

{

printf("%d ", i);
}

}
printf("\n");
}
int main(){
int start, end;

printf("Enter the starting number: ");
scanf("%d", &start);
printf("Enter the ending number: ");
scanf("%d", &end);
findPrimes(start, end);
return 0;
}
