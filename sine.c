#include<stdio.h>
float main()
{
     float result=1,fact=1,c,sum=0,sign=1;
     float y,k;
     for(y=1;y<=77;y+=2)
     {
                       for(k=1;k<=y;k++)
                       {
                                        result=result*3;                 
                       }                  
                       for(k=1;k<=y;k++)
                       {
                                        fact=fact*k;                 
                       }
                       c=result/fact;
                       //sign=1;
                       sum=sum+(sign*c);
                       sign=sign*(-1);
                       result=1;
                       fact=1;
                       c=1;
     }     
     printf("%f",sum);
     getch();
}
