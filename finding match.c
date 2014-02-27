#include<stdio.h>
main()
{
      int a[10];
      int i,j,min;
      for(i=0;i<10;i++)
      scanf("%d",&a[i]);
      
      min=a[0];
      
      for(i=0;i<10;i++)
      {
                       for(j=0;j<10;j++)
                       {
                       if(a[j]<min)
                       min=a[j];
                       }
                       printf("%d",min);
                       
                       //else
                       //continue;               
      }      
      
      getch();
}
