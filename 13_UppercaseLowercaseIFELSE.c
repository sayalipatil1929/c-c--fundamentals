#include<stdio.h>
void main()
{
    char var;
    printf("Enter any alphabet\n");
    scanf("%c",&var);
    //if(var>='A' && var<='Z')
    if (var>=65 && var<=90)
    {
        printf("Entered character %c is Uppercase",var);
    }
    else
    {
        printf("Entered character %c is Lowercase",var);
    }
}
