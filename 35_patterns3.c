#include <stdio.h>
void main()
{
    printf("Pattern:1\n");
    for(char row='A';row>='E';row++)
    {
        for(char col='A';col<=row;col--)
        {
            printf("%c",col);
        }
        printf("\n");
}



printf("Pattern:2\n");
    for(int row=1;row<=5;row++)
    {
        for(int col=row;col<=5;col++)
        {
            printf("%d",col);
        }
        printf("\n");
}







printf("Pattern:3\n");
    for(char row='A';row<='E';row++)
    {
        for(char col=row;col<='E';col++)
        {
            printf("%c",col);
        }
        printf("\n");
}





printf("Pattern:4\n");
    for(char row='E';row>='A';row--)
    {
        for(char col=row;col>='A';col--)
        {
            printf("%c",col);
        }
        printf("\n");
}

}
