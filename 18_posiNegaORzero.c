#include<stdio.h>
void main()
{
    int x;
    printf("PLEASE ENTER THE INTEGER...\n");
    scanf("%d",&x);
    if(x>0)
        printf("%d IS POSITIVE..!!",x);
    else if(x==0)
        printf("%d IS EQUAL TO ZERO..!!",x);
    else
        printf("%dIS NEGATIVE..!!",x);
}
//write program to check number is negative,positive or zero//
