#include<stdio.h>
main()
{
      int start_lim,end_lim,num;
      
      printf("enter the range:");
      scanf("%d%d",&start_lim,&end_lim);
      
      for(num=start_lim;num<=end_lim;num++)
      {
      if(num%2==0)
      printf("%d\t",num);
      }
      getch();      
}
