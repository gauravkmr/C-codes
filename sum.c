#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c,sum;
  printf("enter any three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  sum=calsum(a,b,c);
  printf("sum= %d",sum);
  getch();    
}
1calsum(int x,int y,int z)
{
 int d;
 d=x+y+z;
 return(d);            
}
                                            
