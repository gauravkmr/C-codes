/*average of 10 numbers*/
#include<stdio.h>
main()
{
      int avg,sum=0;
      int x,marks[10];
      for(x=0;x<=9;x++)
      {
                       printf("enter the marks:");
                       scanf("%d",&marks[x]);                 
      }      
      for(x=0;x<=9;x++)
      sum=sum+marks[x];
      avg=sum/10;
      printf("average marks= %d",avg);
      getch();
}
