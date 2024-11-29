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
