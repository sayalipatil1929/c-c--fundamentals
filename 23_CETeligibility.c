//check the eligibility of the candidate for the medical seat with >=45%(p+m+c+b)
#include<stdio.h>
void main()
{
    //taking input
    int p;
    int m;
    int c;
    int b;
    printf("Enter the marks of PHYSICS out of 100\n");
    scanf("%d",&p);
    printf("Enter the marks of MATHS out of 100\n");
    scanf("%d",&m);
    printf("Enter the marks of CHEMISTRY out of 100\n");
    scanf("%d",&c);
    printf("Enter the marks of BIOLOGY out of 100\n");
    scanf("%d",&b);
    //to find sum
    int sum= p+m+c+b;
    //to display sum on screen
    printf("TOTAL MARKS OBTAINED:%d /400\n",sum);
    //to find percentage
    float perc=(sum*100)/400;
    //to display percentage on screen
    printf("\nPERCENTAGE:%f %\n",perc);
    if(perc>=45)
    {
        printf("\nCONGRATULATIONS..!!\n\nYOU ARE ELIGIBLE FOR MEDICAL SEAT.\n");
    }
    else
    {
        printf("\nNOT ELIGIBLE FOR MEDICAL SEAT\n");
    }
}
