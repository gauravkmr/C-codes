#include<stdio.h>
main()
{
      int num[]={11,22,33,4,43,55,66};
      int i,*j;
      
      j=&num[0];
      
      for(i=0;i<7;i++)
      {
                      printf("address= %u\t",j);
                      printf("element= %d\n",*j);
                      j++;                
      }      
      
      getch();
}
