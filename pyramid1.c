#include<stdio.h>
main()
{
      int t=1,n,s,k,N;
      
      printf("height of pyramid");
      scanf("%d",&N);
      
      for(n=1;n<=N;n++)
      {       
            for(s=t;s<=N;s++){            
                              printf(" "); 
                       }   
            for(k=1;k<=n;k++){
                           if(k==1||k==n)
                              printf("@ ");
                              else if(n==N)
                              printf("@ ");   
                           else
                              printf("* ");   
                              }
                              printf("\n");
                              t+=1;
                              
                              //t+=1;
                                    
      }  
      getch();    
}
