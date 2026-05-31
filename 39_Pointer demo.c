#include<stdio.h>
void main()
{
    int x=100;
    int *ptr;
    printf("Printing the address of x:%x\n",&x);
    printf("Printing the address of x into pointer ptr:ptr=&x\n");
    ptr=&x;
    printf("Printing the value ptr:%x\n",ptr);//expecting address of x
    printf("Printing the value of *ptr :%d\n",*ptr);
}
