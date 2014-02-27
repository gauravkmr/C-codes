#include<stdio.h>
main()
{
      int n,k,s;
      for(n=1;n<=5;n++)
      {
                       for(s=1;s<=n;s++){
                                         printf(" ");
                                         } 
                       for(k=n;k<=5;k++)
                       printf("* ");
                       printf("\n");                 
      }      
      getch();
}
