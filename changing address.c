#include<stdio.h>
main()
{
      int num1[]={1,2,3,4,5};
      int num2[5];
      int i;
      
      num2=num1;
      
      printf("num1 elements are :\n");
      for(i=0;i<5;i++)
      printf("%d ",num1[i]);
      
      printf("num2 elements are :\n");
      for(i=0;i<5;i++)
      printf("%d",num2[i]);
      
      getch();      
}
