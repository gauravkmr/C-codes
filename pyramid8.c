#include<stdio.h>
main()
{
      int i,j,k,m,n,s,t=1;
      for(i=1;i<=5;i++)
      {
                       if(i<=3)
                       {
                                     for(s=t;s<=3;s++){
                                                       printf(" ");
                                                       }          
                                      for(k=1;k<=i;k++)
                                                       printf("*");
                                                       printf("\n");   
                                                       t=t+1;                  
                       }        
                       else
                       {
                                     for(m=1;m<=(i+1)/2;m++){
                                                             printf(" ");
                                                             }    
                                      for(n=(i+1)/2;n<=3;n++)
                                                        printf("*");
                                                        printf("\n");                       
                       }         
      }    
      getch();  
}
