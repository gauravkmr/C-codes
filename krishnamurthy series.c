#include<stdio.h>
main()
{
      int n,m,sum=0,f=1,k,count=0,count1=0,count2=0,count3=0,count4=0,temp;
      
      for(n=1;n<=99999;n++)
      {
               temp=n;
               sum=0;
                       while(temp>0)
                       {
                       m=temp%10;
                       f=1;
                       for(k=1;k<=m;k++)
                          f=f*k;                         
                          sum=sum+f;
                          temp=temp/10;
                          //f=1;
                       }
                       
                       if(n==sum){
                                  if(n<=9){
                                  count=count+1;
                                  //printf("%d\n",n);
                                  }
                                  else if(n>9 && n<=99){
                                  count1++;
                                  //printf("%d\n",n);
                                  }
                                  else if(n>99 && n<=999){
                                  count2++;
                                  //printf("%d\n",n);
                                  }
                                  else if(n>999 && n<=9999){
                                  count3++;
                                  //printf("%d\n",n);
                                  }
                                  else {
                                  count4++;
                                  //printf("%d\n",n);
                                  }
                                  }
        }    
      printf("number of one digit krishnamurthy numbers______________%d\n",count);
      printf("number of two digit krishnamurthy numbers______________%d\n",count1);
      printf("number of three digit krishnamurthy numbers____________%d\n",count2);
      printf("number of four digit krishnamurthy numbers_____________%d\n",count3);
      printf("number of five digit krishnamurthy numbers_____________%d\n",count4);
      getch();
}                         
                                           
                        
           
      
