#include<stdio.h>
main()
{
      int i,num,temp,r,a=0,s=0,prod;
      printf("enter a number");
      scanf("%d",&num);
            
      temp=num;
      while(temp>0)
      {
               r=temp%2;
               prod=1;
               for(i=0;i<a;i++)
               prod=prod*10;
               s=s+(r*prod);
               
               a++;             
               temp=temp/2;    
      }
      printf("%08d",s);
      
      getch();
}
