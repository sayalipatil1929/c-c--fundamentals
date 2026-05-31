#include<stdio.h>
void main()
{
    int x,y;
    printf("ENTER TWO NUMBERS:\n");
    scanf("%d %d",&x,&y);
    int *p1,*p2;
    p1=&x;
    p2=&y;
    int **pp1,**pp2;
    pp1=&p1;
    pp2=&p2;
    int sum;
    int *p3,**pp3;
    p3=&sum;
    pp3=&p3;
    **pp3= **pp1+**pp2;
    printf("Sum of %d and %d is:%d",**pp1,**pp2,**pp3);
}
