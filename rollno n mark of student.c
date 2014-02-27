#include<stdio.h>
void main()
{
     int stud[3][2];
     int i;
     
     printf("enter roll no. n marks:\n");
     
     for(i=0;i<3;i++)
     {
                     scanf("%d%d",&stud[i][0],&stud[i][1]);
                    
     }     
     for(i=0;i<3;i++)
      printf("%d\t%d\n",stud[i][0],stud[i][1]);
      
     getch();
}
