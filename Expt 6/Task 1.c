/*
  Title      :-: WAP to define a counter function to
            print how many times the function is called
            use storage classes.
  Name       :-Mansingh Chauhan
  Division.  :-F.E.(ECS) - E
  Roll No    :-17
  UIN        :-241S018
  */
#include<stdio.h>

int fun();
int main()
{
    fun();
    fun();
    fun();
    fun();
    fun();

    return 0;
}

   int fun()

{
    static int count=1;
    printf("Function %d is called \n\n",count++);
}
