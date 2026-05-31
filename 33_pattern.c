#include<stdio.h>
void main()
{
    printf("Pattern:1\n");
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++)
        {
            printf("*");
        }
        printf("\n");
    }






printf("Pattern:2\n");
    for(int row=1;row<=5;row++)
    {
        //int x=1;
        for (int col=1;col<=5;col++) //(int col=1,x=1;col<=5;col++;x++)
        {
            printf("%d",col);
            //x++;
        }
        printf("\n");

    }




printf("Pattern:3\n");
    for(int row=1;row<=5;row++)
    {
        for(char col='A';col<='E';col++)
        {
            printf("%c",col);
        }
        printf("\n");
    }
printf("Pattern:4\n");
    for(char row='A';row<='E';row++)

    {
        for(int col=1;col<=5;col++)
        {
            printf("%c",row);
        }
        printf("\n");
}


printf("Pattern:5\n");
    for(int row=1;row<=5;row++)
    {
        for(int col=5;col>=1;col--)
            {
                printf("%d",col);
            }
            printf("\n");
    }




printf("Pattern:6\n");
    for(int row=5;row>=1;row--)
    {
        for(int col=1;col<=5;col++)
            {
                printf("%d",row);
            }
            printf("\n");
    }






    printf("Pattern:7\n");
    for(char row='E';row>='A';row--)
    {
        for(int col=1;col<=5;col++)
        {
            printf("%c",row);
        }
        printf("\n");
}


printf("Pattern:8\n");
//here can be n=1;
    for(int row=1,n=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++,n++)
        {
            printf("%d",n);
            //or n++;
        }
        printf("\n ");
}





printf("Pattern:9\n");
    for(int row=1,n=1;row<=5;row++)

    {
        for(int col=1;col<=5;col++,n++)
        {
            if(n%2==0)
                printf("0 ");
            else
                printf("1 ");

        }
        printf("\n");
}




printf("Pattern:10\n");
    for(int row=1;row<=5;row++)
    {
        for(int col=1,n=1;col<=5;col++,n++)
        {
            if(n%2==0)
                printf("0 ");
            else
                printf("1 ");

        }
        printf("\n");
}
}
