#include<stdio.h>
main()
{
      char a[10]="welcome";
      
      int i=0;
      do
      {
              printf("%c",a[i]);
              i++;    
      }while(a[i]!='\0');
      
      getch();
}
