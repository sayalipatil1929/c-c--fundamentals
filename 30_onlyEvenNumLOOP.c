//write a program to print 1st 10 even natural numbers
#include<stdio.h>
void main()
{
    int i=1,end=10;
    printf("Only even number from 1st %d natural numbers\n",end);
    do
    {
        if(i%2==0)
            printf("%d \n",i);
        i++;
    }while(i<=10);
}
