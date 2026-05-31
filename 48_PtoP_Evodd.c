
#include<stdio.h>
void main()
{
    int y;
    printf("ENTER THE INTEGER VALUE\n");

    scanf("%d",&y);
    int *p1,**p2;

    p1=&y;
    p2=&p1;

    if(**p2%2==0)
    {
        printf("GIVEN INTEGER %d IS EVEN..",**p2);
    }
    else
    {
        printf("GIVEN INTEGER %d IS ODD..",**p2);
    }
}

