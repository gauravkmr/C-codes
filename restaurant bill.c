#include<stdio.h>
main()
{
      int b=0,st,mc,de;
      char choice,cont;
      
      do
      {
      printf("\nchoose one of (S)tarters,(M)ain course,(D)esert:");
      scanf("%s",&choice);      
      switch(choice)
      {
                    case 'S':
                    case 's':
                         b=b+80;
                         printf("\nbill=Rs %d",b);
                         break;
                    case 'M':
                    case 'm':
                         b=b+180;
                         printf("\nbill=Rs %d",b);
                         break;
                    case 'D':
                    case 'd':
                         b=b+55;  
                         printf("\nbill=Rs %d",b);
                         break;
                     default:
                             printf("invalid choice");                                         
      }
      printf("\ndo u want to continue?(y/n)");
      scanf("%s",&cont);
      }
      while(cont=='y' || cont=='Y');
      
      getch();
}
