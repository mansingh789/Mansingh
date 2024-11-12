/* USING FOR LOOP*/

#include<stdio.h>

int fun();
int main()
{
    int a;
    for(a=1;a<=3;a++)
    {
        fun();
    }

    return 0;
}

   int fun()

{
    static int count=1;
    printf("Function %d is called \n\n",count++);
}
