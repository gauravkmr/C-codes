#include<stdio.h>
void quick_sort(int [],int ,int );
int partition(int [],int ,int);

void main()
{
 
 int n,i;
 int m;
 int arr[20];
 printf("Enter the size of array\n"); // input the elements
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0; i<n; i++)
  scanf("%d",&arr[i]);
 
 printf("\n");
// scanf("%d",&m);
 
  quick_sort(arr,0,n-1); // sort the array
 
 printf("\n");
 printf("Sorted array:"); // print sorted array
 
 for(i=0; i<n; i++)
  printf("%d ",arr[i]);
 
//return 0;
}

void quick_sort(int arr[],int p,int r)
{
  int q;
  if(p<r)
  {
    q=partition(arr,p,r);
    quick_sort(arr,p,q-1);
    quick_sort(arr,q+1,r);
  }
}

  
int partition(int arr[],int p,int r)
{
  int temp;
  int i,j;

  i=p+1;
  j=r;
  
  while(1)
  {
  while(/*j>=i && */arr[j]>arr[p])//&&// 
      j--;
  while(/*i<j && */arr[i]<=arr[p])//&&
      i++;
  if(i<j)//
  {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  else
    break;
  }
  temp=arr[j];
  arr[j]=arr[p];
  arr[p]=temp;
 
  return j;
}

//both equals in while giive a seg fault
// without equals i get infinite loop
//if I interchange the equals condition in inner while loops i dont get the right answer ie equals wit first loop is going wrong for input 8 8 5 3 8 9 and also for input 8 6 10 2 5 55

//final conclusion
//if we have the code as it is we dont need those two conditions
//if I have to interchange the equals sign i need the condition on first loop  for eg input of 2 6 5
//reason being we need to stop j at pivot element since in the end j has to swapped with pivot
