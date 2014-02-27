
#include<stdio.h>
main()
{
      int a[10];
      int i,j,t,c[10],key,F,L,M;
      
      printf("enter an array:\n");
      
      for(i=0;i<10;i++)
      scanf("%d",&a[i]);
      
      /*sorting*/
      /*printf("sorted array:\n");
      
      for(i=0;i<10;i++)
      {
                       for(j=i+1;j<=10;j++)
                       {
                                         if(a[i]<a[j])
                                         {
                                                      c[i]=a[i];
                                                      a[i]=a[j];
                                                      a[j]=c[i];             
                                         }                  
                       }                 
                       
                       printf("%d\t",c[i]);
      }      
      */
      
      /*finding element*/
      printf("enter key;");
      scanf(" %d",&key);
      
      F=0;
      L=10-1;
      M=(F+L)/2;
      
      while(F<=L)
      {
                 if(key==a[M])
                 {
                 printf("key found");
                 break;             
                 }     
                 
                 else if(key>a[M])
                 F=M+1;
                 
                 else
                 L=M-1;
                 
                 M=(F+L)/2;      
      }
      
      if(F>L)
      printf("key not found");
        
      getch();
}
