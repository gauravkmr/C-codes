#include<stdio.h>
main()
{
      int t=0,n,k,s,pre=0,cur=1,next;
      
      for(n=0;n<4;n++)
      {
                      for(s=t;s<4;s++)
                      printf(" ");
                      t++;
                      
                      for(k=0;k<=n;k++)
                      {
                                       if(n==0)
                                       printf("0");
                                       
                                       else if(n==1)
                                       printf("1 1");
                                       
                                       else
                                       {
                                           next=cur+pre;
                                           printf("%d",next);
                                           pre=cur;
                                           cur=next;    
                                       }                 
                      } 
                      printf("\n");               
      }      
      getch();
}
