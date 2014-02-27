#include<stdio.h>
#include<conio.h>
main()
{
      int num,n,sum=0,m;
      
      scanf("%d",&num);
      
      n=num;
      
      while(n>0)
      {
                m=n%10;
                sum=sum*10+m;
                n=n/10;          
      }      
      if(sum==num)
      printf("\npalindrome number");
      else
      printf("not a palindrome number");
      getch();
}
