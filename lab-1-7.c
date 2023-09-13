//swap two numbers.
#include<stdio.h>
int main()
{
    printf("Enter two numbers:");
    int a,b;
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("Result : %d  %d",a,b);
    return 0;
} 