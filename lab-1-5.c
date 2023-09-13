//write a c program to check given int is multiplied by 5 and 7.
#include<stdio.h>
int main()
{
    printf("Enter a number:");
    int a;
    scanf("%d",&a);
    if (a%5==0 || a%7==0) printf("YES ,They are multiplied.\n");
    else printf("NOT multiplied\n");
    return 0;
}