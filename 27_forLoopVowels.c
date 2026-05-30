//program to print only vowels
#include<stdio.h>
void main()
{
    char a;
    printf("ENTER ANY ALPHABATE..");
    scanf("%c",&a);
    for(a=65;a<=90;a++)
    {
      if((a=='A'||a=='E'|| a=='I'||a=='O'||a=='U'))
      printf("%c IS VOWEL",a);

    }
}
