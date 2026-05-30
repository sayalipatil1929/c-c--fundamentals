#include<stdio.h>
void main()
{
    int x;
    int y;
    printf("Enter the numbers\n");
    scanf("%d %d",&x,&y);
    int sum = x+y;
    printf("sum of two numbers is:%d\n",sum);
    if(sum%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

}
