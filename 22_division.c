#include<stdio.h>
void main()
{
    int x;
    int y;
    int z=2;
    printf("enter");
    scanf("%d %d",&x,&y);
    double div= x/y;
    printf("division is:%f",div);
    float mult=div*z;
    printf("ans is:%f",mult);
}
