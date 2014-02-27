#include<stdio.h>
main()
{
      int t=0,i,k,m,p1,p2,p3,f1=1,f2=1,f3=1;
      
      for(i=0;i<=5;i++)
      {
                       if(i==0 || i==1)
                       {
                               
                               for(k=t;k<=5;k++)
                               {
                                                printf(" ");                 
                               }        
                               for(m=0;m<=i;m++)
                               {
                                                printf(" 1");                 
                               }
                               printf("\n");
                               t++;
                       } 
                       else
                       {
                               for(k=1;k<=3;k++)
                               {
                                                printf(" ");                 
                               }    
                               for(m=0;m<=i;m++)
                               {
                                                
                        for(p1=1;p1<=i;p1++)
                        f1=f1*p1;
                        
                        for(p2=1;p2<=(m+1);p2++)
                        f2=f2*p2;
                        f2=f2/(m+1);
                        
                        for(p3=1;p3<=(i-m);p3++)
                        f3=f3*p3;
                        
                        printf(" %d",f1/(f2*f3));
                        f1=1;
                        f2=1;
                        f3=1;                  
                       
                       }
                       }                
      }      
}
