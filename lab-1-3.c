// write a c program to find the second largest number.
#include<stdio.h>
int main()
{
  printf("Enter three numbers : ");
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a<c) printf("%d is the second largest number\n",a);
  else if(a<b && a>c) printf("%d is the second largest number\n",a);
  else if(b>a && b<c) printf("%d is the second largest number\n",b);
  else if(b<a && b>c) printf("%d is the second largest number\n",b);
  else  printf("%d is the second largest number\n",c);
  return 0;
}
