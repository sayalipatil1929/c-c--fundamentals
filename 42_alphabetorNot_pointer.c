//write program to identify given character is alphabet or number or special symbol with pointer
#include<stdio.h>
void main()
{
    char a;
    printf("ENTER THE CHARACTER\n");
    scanf("%c",&a);
    char *ptr;
    ptr=&a;
    if((*ptr>=65 && *ptr<=90)||(*ptr>=97 && *ptr<=122))
        printf("ENTERED %c CHARACTER IS ALPHABET..!!",*ptr);
    else if((*ptr>='0' && *ptr<='9'))
        printf("ENTERED %c CHARACTER IS NUMBER",*ptr);
    else
        printf("ENTERED CHARACTER IS SPECIAL SYMBOL..!!");

}
