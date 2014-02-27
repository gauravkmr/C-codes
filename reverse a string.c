#include<stdio.h>
#include<string.h>
main()
{
      char str[40];
      int i,j;
      
      printf("enter string:");
      scanf("%[^\n]s",&str);
      
      i=0;
      while(str[i]!='\0')
      {
                         while(str[i]!=' ' && str[i]!='\0')
                         {
                                         i++;                
                         }                   
                         j=i-1;
                         while(str[j]!=' ' && j!=-1)
                         {
                                         printf("%c",str[j]);
                                         j--;                
                         }
                         while(str[i]==' ')
                         {
                                         printf(" ");
                                         i++;                
                         }
      }     
       
      getch();
}
