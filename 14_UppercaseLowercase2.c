#include<stdio.h>
//
void main()
{
    char var;
    printf("Enter any alphabet\n");
    scanf("%c",&var);
    //if(var>='A' && var<='Z')
    if ((var>=65 && var<=90)||(var>=97 && var<=122))
    {
        printf("Entered character %c is Alphabet",var);
    }
    else
    {
        printf("Entered character %c is not Alphabet",var);
    }
}

