#include<stdio.h>
main()
{
      int a[30],b[30],c[30],i,n;
      
      printf("elements in A n B:");
      scanf("%d",&n);
      
      printf("enter array A:\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
       printf("enter array B:\n");
      for(i=0;i<n;i++)
      scanf("%d",&b[i]);
      
      for(i=0;i<n;i++)
      c[i]=a[i]*b[i];
      
      for(i=0;i<n;i++)
      printf("%d ",c[i]);
      
      getch();
            
}
