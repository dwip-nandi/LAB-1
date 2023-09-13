//print ascii code.
#include<stdio.h>
int main()
{
    printf("Enter a letter A to Z or a to z:");
    char a;
    scanf("%c",&a);
    printf("Display the ascii code:%d\n",a);
    printf("The next letter:%c\n",a+1);
    return 0;
}