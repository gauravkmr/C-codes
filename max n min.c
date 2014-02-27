/*find min and max of the entered numbers*/
#include<stdio.h>
main()
{
      int max,n,k,min;
      int num[10];
      
      for(n=0;n<10;n++)
      scanf("%d",&num[n]);
      
      max=num[0];
      min=num[0];
      
      for(k=0;k<10;k++)
      {
                       
                       if(num[k]>max)
                       max=num[k];
                       
                       else if(num[k]<min)
                       min=num[k];               
      }      
      printf("%d\n%d",max,min);
      getch();
}
