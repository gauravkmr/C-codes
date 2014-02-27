#include<stdio.h>
main()
{
      int t=1,i,s,k,m=2,N;
      
      printf("height(odd value only):");
      scanf("%d",&N);
      
      for(i=1;i<=(N+1)/2;i++)
      {
                for(s=t;s<(N+1)/2;s++)
                printf(" ");
                
                for(k=1;k<=(2*i-1);k++)
                {
                                       if(i%2==1)
                                       printf("*");
                                       else
                                       {
                                       if(k==1 || k==(2*i-1))
                                       printf("*");
                                       else
                                       printf("@");
                                       }
                }
                printf("\n");
                t++;                        
      }      
      
      for(i=(N-1)/2;i>=1;i--)
      {
                for(s=m;s<=2;s++)
                printf(" ");
                
                for(k=1;k<=(2*i-1);k++)
                {
                                       if(i%2==1)
                                       printf("*");
                                       else
                                       {
                                       if(k==1 || k==(2*i-1))
                                       printf("*");
                                       else
                                       printf("@");
                                       }
                }
                printf("\n");
                m--;                 
      }
      getch();
}
