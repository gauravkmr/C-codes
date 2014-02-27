#include<stdio.h>
#include<string.h>
main()
{
      char str1[30];
      char str2[30];
      char str[60];
      int i,j,k;
      
      printf("string 1:");
      scanf("%[^\n]s",&str1); 
      
       printf("string 2:");
      scanf(" %[^\n]s",&str2); 
          
      
      i=0;
      while(str1[i]!='\0'){
      i++;}
      
      j=0;
      while(str2[j]!='\0'){
      j++;}
      //printf("%d ",i);
      //printf("%d\n",j);
      
      for(k=0;k<i;k++)
      str[k]=str1[k];
      
      if(i>0)
      {
      str[i]=32;
      
      for(k=0;k<j;k++)
      {
                      str[k+i+1]=str2[k];
                      //i++;
      }
      for(k=0;k<(i+j+1);k++)
        printf("%c",str[k]);
      }
      
      else{
      for(k=0;k<j;k++)
      str[k]=str2[k];
      
      for(k=0;k<j;k++)
        printf("%c",str[k]);
        }
        getch();
      
}
