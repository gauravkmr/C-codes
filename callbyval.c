#include<stdio.h>
main()
{
      int ID[5]={12,23,45,65,657};
      int i; 

      for(i=0;i<=4;i++)
      disp(ID[i]);
      getch();     
}
disp(int m)
{
         printf("%d\t",m);         
}
