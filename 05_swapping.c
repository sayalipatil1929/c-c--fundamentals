#include<stdio.h>
void main()
{
    int a=5;
    int b=6;
    int temp;
    printf("Swapping using third variable\n");
    printf("Values before swapping are:\n a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nValues after swapping are:\n a=%d and b=%d",a,b);
    //swapping without using third varaible
    printf("\nSwapping without using third variable");
    printf("\nValues before swapping are:\n a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues after swapping are:\n a=%d and b=%d",a,b);
}

