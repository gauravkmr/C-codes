#include<stdio.h>
main()
{
      int a[20],b[20],c[40];
      int n1,n2,i,p,k,min;
      
      printf("enter the size of array 1:");
      scanf("%d",&n1);
      
      printf("\nEnter elements of array 1:\t");
      for(i=0;i<n1;i++)
      scanf("%d",&a[i]); 
      
      printf("\nenter the size of array 2:");
      scanf("%d",&n2); 
      
      printf("\nEnter elements of array 2:\t");
      for(i=0;i<n2;i++)
      scanf("%d",&b[i]);     
      
      for(i=0;i<(n1+n2);i++)
      {
                            if(i>=0 && i<n1)
                            {
                            c[i]=a[i];
                            printf("%d\t",c[i]);
                            }
                            
                            else 
                            { 
                            p=i-n1;
                            c[i]=b[p];  
                            printf("%d\t",c[i]); 
                            }                 
      }
      printf("\nsorted array:\n");
      for(i=0;i<(n1+n2);i++)
      {
                            for(k=(i+1);k<=(n1+n2);k++)
                            {
                                                       if(c[i]>c[k])
                                                       {
                                                       min=c[i];
                                                       c[i]=c[k];
                                                       c[k]=min;
                                                       }                           
                            }                      
                            printf("%d\t",min);
      }
      
      getch();
}
