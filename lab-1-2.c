// write a c program to find minimum/maximum of two or three numbers.
#include<stdio.h>
int main()
{
  printf("Enter the numbers : ");
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c) printf("%d is the maximum number\n",a);
  else if(b>a && b>c) printf("%d is the maximum number\n",b);
  else  printf("%d is the maximum number\n",c);
  if(a<b && a<c) printf("%d is the minimum number\n",a);
  else if(b<a && b<c) printf("%d is the minimum number\n",b);
  else printf("%d is the minimum number \n");
  return 0;
}
