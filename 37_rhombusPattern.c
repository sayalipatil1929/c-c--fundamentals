#include<stdio.h>
void main()
{
    int rows=5,col=9;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j>=rows-(i-1) && j<=col-(i-1))
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
}
