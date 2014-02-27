#include<stdio.h>                          /*to generalise change 5 to N*/
main()
{
      int n,s,k,t=1;
      for(n=1;n<=5;n++)
      {
                       for(s=t;s<=5;s++){
                                         printf(" ");
                                         }           
                       for(k=1;k<=n;k++)
                                         printf("* ");
                                         printf("\n");  
                                         t=t+1;                      
      }   
      getch();   
}
