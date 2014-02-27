#include<stdio.h>
main()
{
      int i,h,t=1,n,k,p,s;
      
      printf("height of pyramid (odd values only):   ");
      scanf("%d",&h);
      
                     
      if(h%2!=0)
      {
      n=(h+1)/2;
      
      {
      for(i=1;i<=n;i++)
      {
                       for(k=t;k<=(n-1);k++)
                       {
                                        printf(" ");                 
                       }                 
                       for(p=1;p<=i;p++)
                       {
                                        printf(" *");                 
                       }
                       printf("\n");
                       t++;
      }  
      }
      s=n-1;
      {
      for(i=1;i<=(n-1);i++)
      {
                       for(k=s;k<=(n-1);k++)
                       {
                                        printf(" ");
                       }                 
                       for(p=(n-1);p>=i;p--)
                       {
                                        printf(" *");                 
                       }
                       printf("\n");
                       s--;
      }                  
      }
      }
      
      else
      printf("invalid input. try with an odd number");    
      
      getch();
}
