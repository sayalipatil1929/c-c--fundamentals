#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number to check even or odd\n");
    scanf("%d",&num);
    int *ptr;
    ptr=&num;
    if(*ptr%2==0)
        printf("Number %d is even!!\n",*ptr);
    else
        printf("Number %d is odd!!\n",*ptr);
    }
