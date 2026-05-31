#include<stdio.h>
void main()
{
printf("Pattern:1\n");
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("* ");

        }
        printf("\n");
    }






    for(int row=4;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            printf("* ");

        }
        printf("\n");
}





printf("Pattern:2\n");
    for(int row=1,n=1;row<=5;row++)
    {
        for(int col=1;col<=row;col++)
        {
            if((row +col)%2==1)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
}






printf("Pattern:3\n");
    for(int row=5,n=1;row>=1;row--)
    {
        for(int col=row;col<=5;col++)
        {
            printf("%d",col);
        }
        printf("\n");
}






printf("Pattern:4\n");
    for(int row=1,n=1;row<=5;row++)
    {
        for(int col=row;col>=1;col--)
        {
            printf("%d",col);
        }
        printf("\n");
}




printf("Pattern:5\n");
    for(int row=1,n=1;row<=5;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
}




printf("Pattern:6\n");
for(int row=5,n=1;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            printf("%d",row);
        }
        printf("\n");
}
}
