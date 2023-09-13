#include<stdio.h>
int main()
{
    printf("Enter two numbers:");
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%b==0 || b%a==0) printf("They are multiplied\n");
    else printf("NOT multiplied\n");
    return 0;
}
