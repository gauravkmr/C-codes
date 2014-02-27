#include<stdio.h>
main()
{
      int num[]={11,22,333,44,5,56,77};
      int i;
      
      for(i=0;i<7;i++)
      {
                      printf("address=%d\t",&num[i]);
                      printf("element=%d %d %d %d\n",num[i],*(num+i),*(i+num),i[num]);                
      }      
      getch();
}
