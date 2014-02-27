#include<stdio.h>
main()
{
      int a[3],i=0,k,choice;
      
      
      printf("choose an operation:\n");
      printf("1.Add\t2.Delete\t3.Exit");
      scanf("%d",&choice);
      
      switch(choice)
      {
                    case 1:
                         printf("Enter the element:");
                         scanf("%d",&a[i]); 
                         
                         printf("Elements in the array:");                    
                         for(k=0;k<=i;k++)
                         printf("%d",a[k]);
                         
                         i++;
                         
                    default:
                            printf("gand mara");                  
      }      
      getch();
}
