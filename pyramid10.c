#include<stdio.h>
main()
{
      int temp=1,row,s,k,t=5;
      
      for(row=1;row<=5;row++)
      {
                             for(s=1;s<temp;s++)
                             printf(" ");
                             
                             temp++;
                             
                             for(k=1;k<=t;k++)
                             printf("%d",k);
                             
                             t--;
                             
                             printf("\n");                       
      }      
      getch();
}
