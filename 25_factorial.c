//program to find the factorial
#include<stdio.h>
void main()
{
    int n,pro=1;
    printf("ENTER THE NUMBER TO FIND THE FACTORIAL\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        pro=pro*i;
    }
    printf("FACTORIAL OF %d ! : %d",n,pro);
}
