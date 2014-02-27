#include<stdio.h>
main()
{
      int arr[3][3],i,j,n=1;
      
      for(i=0;i<3;i++)
      {
                      for(j=0;j<3;j++)
                      {
                      printf("Element{%d,%d}=%d\n",i,j,n); 
                      n++;       
                      }     
      }      
      
      getch();
}
