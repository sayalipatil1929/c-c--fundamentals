
//sum of 1st n natural numbers
#include<stdio.h>
void main()
{
    int n;
    int sum=0;
    printf("ENETR THE NUMBER TO END THE LOOP..\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("SUM OF 1ST %d NATURAL NUMBERS ARE: %d",n,sum);
}
