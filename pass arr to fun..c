#include<stdio.h>
main()
{
      int num[]={12,22,3,3,4,56,0,7};
      
      display(num,8);      
      getch();
}
display(int *i,int j)
{
            int k;
            for(k=0;k<j;k++)
            {
                            printf("element=%d\n",*i);
                            i++;                
            }            
}
