#include<stdio.h>
main()
{
      int a[100];
      int i,n,even=0,odd=0;
      
      /*how many elements d array contains*/
      printf("how many elements u want to enter?");
      scanf("%d",&n);
      
      if(n<0 || n>100)
      {
             printf("invalid input...Enter again.");
             scanf("%d",&n);       
      }      
      
      /*taking input*/
      printf("Enter the elements:\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
      /*logic*/
      for(i=0;i<n;i++)
      {
                      if(a[i]%2==0)
                      even++;   
                      else
                      odd++;             
      }
      
      /*printing output*/
      printf("\nNumber of even numbers %d",even);
      printf("\nNumber of odd numbers %d",odd);
      
      getch();
}
