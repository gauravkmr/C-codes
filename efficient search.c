#include<stdio.h>
main()
{
      int a[4][5]={4,5,6,12,15,8,10,11,13,17,9,14,16,18,20,10,18,22,24,27};
      int r=-1,c=-1,key,count=0;
      
      printf("enter the key:");
      scanf("%d",&key);
      for(r=0,c=4;r<=3,c>=0;)
      {
                             if(a[r][c]>key)
                             c--;
                                                          
                             else if(a[r][c]<key)
                             r++;
                             
                             
                             if(a[r][c]==key)
                             
                             {
                                             printf("%d row , %d col.\n",(r+1),(c+1));
                                             r++;
                                             count++;
                                             continue;
                             }                      
      }
      if(count==0)
      printf("not found");
      
      
      getch();
            
}
