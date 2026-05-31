#include<stdio.h>
void main()
{
    int num=500;
    int *p1;
    p1=&num;//storing the address of num
    int **p2;
    p2=&p1;

    printf("Address of num:%x\n",&num);
    printf("Address of p1:%x\n",&p1);
    printf("Address of p2:%x\n",&p2);
    //print the value of each variable
    printf("value of num:%d\n",num);
    printf("value of p1:%x\n",p1);
    printf("value of p2:%x\n",p2);
    //print the value of each pointer
    printf("value of *p1:%d\n",*p1);
    printf("value of **p2:%d\n",**p2);

}
