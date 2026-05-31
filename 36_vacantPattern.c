#include<stdio.h>
void main()
{


printf("Pattern:1\n");
    for(int row=1;row<=5;row++)
    {

        for (int col=1;col<=5;col++)
        {
            if(row==1||row==5||col==1||col==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }


printf("Pattern:2\n");

 for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=row;col++)
        {
            if(row==1||col==1||col==row||row==5)
                printf("* ");
            else
                printf("  ");

        }
        printf("\n");
    }




printf("Pattern:3\n");
    for(int row=1;row<=5;row++)
    {

        for (int col=1;col<=5;col++)
        {
            if(col==1||col==5||row==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }


    printf("Pattern:4\n");
    for(int row=1;row<=5;row++)
    {

        for (int col=1;col<=5;col++)
        {
            if(row==1||row==5||col==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }



printf("Pattern:5\n");
    for(int row=1;row<=5;row++)
    {

        for (int col=1;col<=5;col++)
        {
            if(col==3||row==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }

printf("Pattern:6\n");
    for(int row=1;row<=5;row++)
    {

        for (int col=1;col<=5;col++)
        {
            if(col==1||row==5||row==3||row==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }

printf("Pattern:7\n");
int linesss=5;
    for(int row=1;row<=linesss;row++)
    {

        for (int col=1;col<=linesss;col++)
        {
            if(col==1||col==linesss||row==linesss)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }

printf("Pattern:8\n");
    for(int row=1;row<=5;row++)
    {

        for (int col=1;col<=5;col++)
        {
            if(col==1||row==5||row==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }

printf("Pattern:9\n");
int lines=5;
    for(int row=lines;row>=1;row--)
    {

        for (int col=1;col<=lines;col++)
        {
            if(row==lines||row==1||col==row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }

//row=end val/2+1 or col=end val/2+1
printf("Pattern:10\n");
int liness=8;
    for(int row=1;row<=liness)
    {

        for (int col=1;col<=liness;col++)
        {
            if(row==liness||row==1||col==(liness/2)+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }

}


