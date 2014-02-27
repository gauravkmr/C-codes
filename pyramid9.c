#include<stdio.h>
main()
{
      int n,s,k,d,m=1,p=1;
      
      for(n=1;n<=4;n++)
      {
                       for(s=m;s<4;s++)
                       printf(" ");
                       m++;
                       
                       for(k=1;k<=(2*n-1);k++)
                       {
                                              if(k<=n)
                                              printf("%d",k);
                                              
                                              else{
                                              //if(p<=(n-1))
                                                  printf("%d",(n-p));
                                                  p++;
                                                  //continue;
                                                  }                           
                       }    
                       p=1;             
                       printf("\n");
      }      
      getch();
}
