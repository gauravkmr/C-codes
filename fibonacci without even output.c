#include<stdio.h>
main()
{
      int pre=0,cur=1,next,num,i;
      
      
      printf("how many fibonacci digits do you want");
      scanf("%d",&num);
      
      printf("%d\t%d\t",pre,cur);
      for(i=1;i<=num-2;i++)
      {
      next=cur+pre;
      pre=cur;
      cur=next;
      if(next%2==0){
                   continue;}
      printf("%d\t",next);
      
      }      
      getch();
}
