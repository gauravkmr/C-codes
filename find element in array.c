#include<stdio.h>
main()
{
      int num[100];
      int N,i,val,count=0;
      
      
      printf("how many values u want to enter?");
      scanf("%d",&N);
      
      if(N>100 || N<0){
      printf("chutiye 0 se 100  ki range main value dal.\t");
      scanf("%d",&N);
      }
      
      printf("Enter elements.\n");
      
      for(i=0;i<N;i++)
      scanf("%d",&num[i]);
      
      printf("which fucking do u want to match?\t");
      scanf("%d",&val);
      
      for(i=0;i<N;i++)
      {
                      if(num[i]==val)
                      count++;                
      }
      
      printf("the value %d appears %d times",val,count);
      
      getch();
}
