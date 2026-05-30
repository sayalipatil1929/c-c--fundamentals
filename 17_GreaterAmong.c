// write program to greater among 3 number//
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("ENTER THE 1ST NUMBER\n");
    scanf("%d",&x);
    printf("\n");
    printf("ENTER THE 2ND NUMBER\n");
    scanf("%d",&y);
    printf("\n");
    printf("ENTER THE 3RD NUMBER\n");
    scanf("%d",&z);
    if(x>z && x>y)
        printf("%d is largest among %d and %d",x,y,z);
    else if(y>x && y>z)
        printf("%d is largest among %d and %d",y,x,z);
    else
        printf("%d is largest among %d and %d",z,x,y);
}
