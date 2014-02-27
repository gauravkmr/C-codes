#include<stdio.h>             /*factorial*/
#include<conio.h>
main()
{
      int num,prod,k;
      printf("enter the number whose factorial you want:\n\n\t\t\t\t");
      scanf("%d",&num);
      prod=1;
      for(k=1;k<=num;k++)
      {
         prod=prod*k;                
      }
      printf("\t\t\t\t%d",prod);
      getch();
}
