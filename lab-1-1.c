// write a c program to find area/volume/perimeter of a square/rectangle/circle.
#include<stdio.h>
int main()
{
   /* printf("Enter a length of square:");
    int a;
    scanf("%d",&a);
    int area=a*a;
    printf("The area of the square = %d\n",area);
    int volume=a*a*a;
    printf("The volume of the square = %d\n",volume);
    int perimeter=4*a;
    printf("The perimeter of the square = %d\n",perimeter);*/

   
  /* printf("Enter a length , width and hight of rectangle:");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int area=a*b;
    printf("The area of the rectangle = %d\n",area);
    int volume=a*b*c;
    printf("The volume of the rectangle = %d\n",volume);
    int perimeter=2*(a+b);
    printf("The perimeter of the rectangle = %d\n",perimeter);*/



    printf("Enter a radious of circle:");
    int r;
    scanf("%d",&r);
    float area=3.1416*r*r;
    printf("The area of the circle = %f\n",area);
    float volume=(4/3)*3.1416*r*r*r;
    printf("The volume of the circle = %f\n",volume);
    float perimeter=2*3.1416*r;
    printf("The perimeter of the circle = %f\n",perimeter);
    return 0;
} 