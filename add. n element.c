/*printing add. n element*/
#include<stdio.h>
main()
{
      int arr[]={11,22,33,44,55,66,77,88,99};
      int i;
      
      for(i=0;i<9;i++)
      {
                      printf("element= %d ,,address= %d\n",arr[i],&arr[i]);                
      }      
      
      getch();
}
