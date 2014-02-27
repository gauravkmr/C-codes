#include<stdio.h>
main()
{
      int pre=2,cur=3,next,count,i,n,s=4,sum=0,c=0,temp,m,k=0;
      
      printf("no. of digits:");
      scanf("%d",&n);
                                   
                                   
                                                     next=cur+pre;
                                                     //pre=cur;
                                                     //cur=next;
                                   for(i=s;i<=next;i++)
                                   {
                                                     
                                                     if(i!=next)
                                                     {
                                                                if(i%2!=0){
                                                     printf("%d\t",i);
                                                     sum=sum+1;
                                                     temp=i;
                                                     while(temp>0){
                                                                   m=temp%10;
                                                                   temp=temp/10;
                                                                   k=10*k+m;
                                                                   }
                                                                   if(k==i)
                                                                   c=c+1;}
                                                     
                                                     
                                                     if(sum>=n){
                                                               break;
                                                               }
                                                               }
                                                     
                                                     else{
                                                     s=next+1;
                                                     pre=cur;
                                                     cur=next;
                                                     next=cur+pre;
                                                     continue;}                    
                                   }  
                                                  printf("number of palindromes %d",c);
      //}      
      getch();
}
