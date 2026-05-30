#include<stdio.h>
void main()
{
    char x;
    int y;
    printf("ANY INTEGER VALUE\n");
    scanf("%c %d",&x,&y);
    if(x=='-')
    {
        printf("ENTERED NUMBER % c%d IS NEGATIVE\n",x,y);
    }
    else
    {
        printf("ENTERED NUMBER %d IS POSITIVE\n",y);
    }
}
