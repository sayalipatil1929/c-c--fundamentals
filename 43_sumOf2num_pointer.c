//program to print the sum of two numbers with pointer
#include<stdio.h>
void main()
{
    int a,b;
    printf("ENTERT THE NUMBERS..\n");
    scanf("%d %d",&a,&b);
    int *ptr;
    ptr=&a;
    int *pntr;
    pntr=&b;
    int sum;
    int *pnter;
    pnter =&sum;
    sum= *ptr + *pntr;
    printf("SUM OF TWO NUMBER IS:%d",*pnter);
}
