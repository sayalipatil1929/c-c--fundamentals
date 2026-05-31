#include<stdio.h>
void main()
{
    printf("Pattern:1\n");
    int row=5,col=9;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("*");
        }
        printf("\n");
    }



    printf("Pattern:2\n");
    int rows=5,cols=9;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(j>=(rows-i)+1 && j<=(rows+i)-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }


    printf("Pattern:3\n");
    int rowss=5,colss=9;
    for(int i=rowss;i>=1;i--)
    {
        for(int j=1;j<=colss;j++)
        {
            if(j>=(rowss-i)+1 && j<=(rowss+i)-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}



