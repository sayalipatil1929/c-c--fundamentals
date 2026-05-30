#include<stdio.h>
void main()
{
    int x;
    printf("ENTER ANY INTEGER VALUE \n");
    scanf("%d",&x);
    if(x>10)
    {
        printf("VALUE IS GREATER THAN 10\n");
    }
    else if(x==10)
    {
        printf("VALUE IS EQUAL TO 10\n");
    }
    else if(x<10)
    {
        printf("VALUE IS SMALLER THAN 10\n");
    }
    else
    {
        printf("PLEASE ENETR INTEGER..!!\n");
    }
}
