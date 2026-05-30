#include<stdio.h>
void main()
{
    int c=97;
    printf("%c Character ASCII value is %d \n",c,c);//If we do not declare variables i.e c,c it will give the garbage value//
    printf("Uppercase of %c is %c\n",c,(c-32));
    /*to convert ASCII value uppercase to lowercase
    Uppercase+32
    If want to convert lowercase to uppercase
    Lowercase-32*/
}
