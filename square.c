#include<stdio.h>
#include<conio.h>
main()
{
      float square(float);
   float a,b;
   printf("enter the number whose square you want: ");
   scanf("%f",&a);
   b=square(a);
   printf("square of %f is %f",a,b);
   getch();   
}
float square(float x)
{
   float y;
   y=x*x;
   return(y);          
}
