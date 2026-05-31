#include<stdio.h>
void main()
{
    int x;
    printf("PLEASE ENTER THE INTEGER...\n");
    scanf("%d",&x);
    int *p,**p2;
    p=&x;
    p2=&p;

    if(**p2>0)
        printf("%d IS POSITIVE..!!",**p2);
    else if(**p2==0)
        printf("%d IS EQUAL TO ZERO..!!",**p2);
    else
        printf("%dIS NEGATIVE..!!",**p2);
}
