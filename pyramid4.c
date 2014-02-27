#include<stdio.h>
main()
{
      int n,k,t=1,s;
      for(n=1;n<=5;n++)
      {
                       for(s=t;s<=5;s++){
                                         printf(" ");
                                         }
                       for(k=1;k<=n;k++)
                       printf("*");
                       printf("\n");  
                       t=t+1;               
      }      
      getch();
}
