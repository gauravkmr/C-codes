#include<stdio.h>
main()
{
      int n;
      char i,k;
      
      printf("height of character pyramid:(<27)  ");
      scanf("%d",&n);
      
      for(i=97;i<(97+n);i++)
      {
                       for(k=97;k<=i;k++){
                                          printf("%c",k);
                                          }
                                          printf("\n");
                                        
      }      
      getch();
}
