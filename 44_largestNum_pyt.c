//C program to find largest among the three numbers with pointer
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("ENTER THE 1ST NUMBER\n");
    scanf("%d",&x);
    int *ptr1;
    ptr1=&x;
    printf("\n");
    printf("ENTER THE 2ND NUMBER\n");
    scanf("%d",&y);
    int *ptr2;
    ptr2=&y;
    printf("\n");
    printf("ENTER THE 3RD NUMBER\n");
    scanf("%d",&z);
    int *ptr3;
    ptr3=&z;
    printf("\n");
    if(*ptr1>*ptr3 && *ptr1>*ptr2)
        printf("%d is largest among %d and %d",*ptr1,*ptr2,*ptr3);
    else if(*ptr2>*ptr1 && *ptr2>*ptr3)
        printf("%d is largest among %d and %d",*ptr2,*ptr1,*ptr3);
    else
        printf("%d is largest among %d and %d",*ptr3,*ptr1,*ptr2);
        printf("\n");
}

