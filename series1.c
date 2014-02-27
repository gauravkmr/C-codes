#include<stdio.h>
main()
{
      int N,i,s1=0,s2=0,t1=0,t2=0;
      
      printf("keyin a number");
      scanf("%d",&N);
      
      for(i=1;;i=i+2)
      {
                         if(i%4==1){
                                    s1=s1+1;
                                    t1=t1+i;
                         printf("+%d\t",i);
                         }
                         if(i%4==3){
                                    s2=s2+1;
                                    t2=t2+i;
                         printf("%d\t",-i);
                         }    
                         if(s1+s2>=N){
                                     break;
                                     }
                                                      
      }      
      printf("\nsum+=%d",t1);
      printf("\nsum-=%d",-t2);
      getch();
}
