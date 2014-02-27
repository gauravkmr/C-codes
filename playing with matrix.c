#include<stdio.h>
main()
{
      int a[3],i=0,k,choice,m;
      
      while(i<4)
      {
      printf("\nchoose an operation:\n");
      printf("1.Add\t2.Delete\t3.Exit\n");
      scanf("%d",&choice);
      
      switch(choice)
      {
                    case 1:
                         printf("Enter the element:\t");
                         scanf("%d",&a[i]); 
                         if(i>2)
                         {
                         printf("Add can't be performed.");
                         break;
                         }
                         
                         printf("Elements in the array:  ");                    
                         for(k=0;k<=i;k++)
                         printf("%d\t",a[k]);
                         
                         i++;
                         break;
                         
                    case 2:
                         if(i<=0)
                         {
                                printf("deletion can't be performed.array is empty.");
                                break;
                         }
                         printf("Elements in the array:  ");
                         for(k=0;k<=(i-2);k++)
                         printf("%d\t",a[k]);
                         i--;
                         
                         break;
                              
                    case 3:
                         i=4;
                         break;
                         
                    default:
                            printf("gand mara");                  
      }
      }    
      getch();
}
