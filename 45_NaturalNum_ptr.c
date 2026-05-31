//print even numbers from 1 to 10 natural numbers
#include<stdio.h>
void main()
{
    int i;
    int *ptr;
    for(i=1;i<=10;i++)
    {
        ptr=&i;
        if(*ptr%2==0)
            printf("%d\n",*ptr);
    }
}

