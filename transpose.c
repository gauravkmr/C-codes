#include<stdio.h>
main()
{
      int a[30][30];
      int t[30][30];
      int r,c,i,j;      
      printf("Enter the dimension of matrix (row,col):");
      scanf("%d%d",&r,&c);
      
      printf("\nenter elements:\n");
      for(i=0;i<r;i++)
      {
             for(j=0;j<c;j++)
             {
                             scanf("%d",&a[i][j]);                
             }         
      }      
      
      printf("given matrix:\n");
      
      for(i=0;i<r;i++)
      {
                      printf("\n");
                      for(j=0;j<c;j++)
                      {
                                      printf("%d\t",a[i][j]);                
                      }         
      }      
      
      printf("\ntranspose is:\n");
      for(i=0;i<c;i++)
      {
                      printf("\n");
                      for(j=0;j<r;j++)
                      {
                                      t[i][j]=a[j][i];
                                      printf("%d\t",t[i][j]);                                               
                      }                
      }
      getch();
}
