#include<stdio.h>
main()
{
      char a[50];
      int i,k,count=0;
      scanf("%[^\n]s",&a);
      i=0;
      while(a[i]!='\0')
      {
                       i++;                 
      }      
      
      for(k=0;k<i;k++)
      {
                      if(a[k]==' ')
                      count++;                
      }
      count++;
      printf("%d\n",i);
      printf("no. of words %d",count);
      
      getch();
}
