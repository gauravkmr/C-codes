#include<stdio.h>
main()
{
      int a[10],b[10],i;
      int g1=0,c1=0,a1=0,t1=0,g2=0,c2=0,t2=0,a2=0;
      
      printf("MATRIX SHOULD CONTAIN ONLY 10,20,30 or 40\n");
      
      printf("Enter matrix 1:\n");
      for(i=0;i<10;i++)
      scanf("%d",&a[i]);    
      
      printf("Enter matrix 2:\n");
      for(i=0;i<10;i++)
      scanf("%d",&b[i]);
      
      for(i=0;i<10;i++)
      {
                       if(a[i]==10)
                       g1++;
                       else if(a[i]==20)
                       c1++;
                       else if(a[i]==30)
                       a1++;
                       else if(a[i]==40)
                       t1++;                                  
      }    
      
      for(i=0;i<10;i++)
      {
                       if(b[i]==10)
                       g2++;
                       else if(b[i]==20)
                       c2++;
                       else if(b[i]==30)
                       a2++;
                       else if(b[i]==40)
                       t2++;                                  
      }    
      
      printf("array 1\n");
      printf("guanin count=%d cytosin count=%d adenin count=%d thymine count=%d\n",g1,c1,a1,t1);
      
      printf("array 2\n");
      printf("guanin count=%d cytosin count=%d adenin count=%d thymine count=%d\n",g2,c2,a2,t2);
      
      if(g1==c2 && a1==t2 && c1==g2 && t1==a2)
      printf("the two sequences form a pair.");
      
      else
      printf("the two sequences donot form a pair.");

      getch();
}
