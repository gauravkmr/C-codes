#include<stdio.h>
main()
{
      int a[2][2],b[2][2],c[2][2];
      int i,j,p,q,sum=0,m1,m2,n1,n2;
      
      printf("enter the number of rows and columns in matrix A:\n");
      scanf("%d%d",&m1,&n1);
      
      printf("\nEnter matrix A:\n");
      for(i=0;i<m1;i++)
      {
                      //printf("\n");
                      for(j=0;j<n1;j++)
                      scanf("%d",&a[i][j]);                
      }
      
      printf("\nenter the number of rows and columns in matrix B:\n");
      scanf("%d%d",&m2,&n2);
      
      printf("\nEnter matrix B:\n");
      for(i=0;i<m2;i++)
      {
                      //printf("\n");
                      for(j=0;j<n2;j++)
                      scanf("%d",&b[i][j]);                
      }
      
      if(n1==m2)
      {
                printf("on multipication we get the matrix (order %d,%d):\n",m1,n2);
                
                for(p=0;p<m1;p++)
                {
                      for(q=0;q<n2;q++)
                      {
                                      for(i=0;i<m2;i++)
                                      {
                                                      for(j=0;j<n1;j++)
                                                      {
                                                                      if(i==j)
                                                                      c[p][q]=a[p][j]*b[i][q];
                                                                      
                                                      }
                                                      sum=sum+c[p][q];
                                      }                
                                      
                                      printf("%d\t",sum);
                                      sum=0;
                      }                
                      printf("\n");
                }
      }
      
      else
      printf("\nmatrices are not of correct order.");
      
      getch();
}      
           
            
