//write c program to char is alphabet /symbol/num//
#include<stdio.h>
void main()
{
    char a;
    printf("ENTER THE CHARACTER\n");
    scanf("%c",&a);
    if((a>=65 && a<=90)||(a>=97 && a<=122))
        printf("ENTERED CHARACTER ID ALPHABET..!!");
    else if((a>='0' && a<='9'))
        printf("ENTERED CHARACTER IS NUMBER..!!");
    else
        printf("ENTERED CHARACTER IS SPECIAL SYMBOL..!!");

}
