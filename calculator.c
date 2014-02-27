#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int n1,n2,x,i;
      int choice;
      
      printf("MENU:   choice1 for '+'\n\t");
      printf("choice2 for '-'\n\t");
      printf("choice3 for '/'\n\t");
      printf("choice4 for '*'\n\t");
      printf("choice5 for '^'\n\t");
      printf("choice6 for '%'\n");
      
      printf("enter the choice of operator: ");
      scanf("%d",&choice);
      
      printf("enter the operand 1:\n");
      scanf("%d",&n1);
      printf("enter the operand 2:\n");      
      scanf("%d",&n2);
      
      //printf("enter the choice of operator: ");
      //scanf("%d",&operator);
      
      switch(choice)
      {
                      case 1:
                           
                           printf("%d",n1+n2);
                           break;
                           
                      case 2:
                           
                           printf("%d",n1-n2);
                           break;
                           
                      case 3:
                           
                           printf("%d",n1/n2);     
                           break;
                           
                      case 4:
                           
                           printf("%d",n1*n2);
                           break;
                           
                      case 5:
                           
                           x=1;
                           for(i=1;i<=n2;i++)
                           {
                                             x=x*n1;
                           }
                                             printf("%d",x);
                           
                           break;
                           
                      case 6:
                           
                           printf("%d",n1%n2);
                           break;
                           
                      default :
                              printf("invalid choice");                
      }
      getch();
}
