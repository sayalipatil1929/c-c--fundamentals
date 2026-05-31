//program to find given number is positive or negative with pointer{
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number..\n");
    scanf("%d",&num);
    int *ptr;
    ptr=&num;
    if(*ptr>0)
    {
        printf("NUMBER %d IS POSITIVE",*ptr);
    }
    else
        {
            printf("NUMBER %d IS NEGATIVE",*ptr);
        }
}
