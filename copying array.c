/*copying the contents of an array to another*/
#include<stdio.h>
main()
{
      int arr1[20];
      int arr2[20],i,n; 
      
      printf("enter the size of array 1: ");
      scanf("%d",&n);
      
      printf("enter array 1:\n");
      for(i=0;i<n;i++)
      scanf("%d",&arr1[i]);
      
      for(i=0;i<n;i++)
      {
                      arr2[i]=arr1[i];                
      }     
      for(i=0;i<n;i++)
      printf("%d\t",arr2[i]);
      
      getch();
}
