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
 
 quick_sort(arr,0,n-1); // sort the array
// m=partition(arr, 0, n-1);
// printf("\n");
// printf("Sorted array:"); // print sorted array
// printf("%d ", m);
printf("\n");
 for(i=0; i<n; i++)
  printf("%d ", arr[i]);
  printf("\n");
 
//return 0;
}

void quick_sort(int arr[],int p,int r)
{
  int q;
  if(p<r)
  {
    q=partition(arr,p,r);
//printf("%d\n", q);
    quick_sort(arr,p,q-1);
    quick_sort(arr,q+1,r);
  }
}


int partition(int arr[], int head, int tail)
{
	int i, j, k, key, temp;

	i = head+1;
	j = tail;
	key = arr[head];
	printf("\nArray passed to partition : ");
	for(k=head;k<=tail;k++)
	printf("%d ",arr[k]);
	while(i <= j && arr[i] < key)
	{
		i = i + 1;
	}

	while(i <= j && arr[j] >= key)
	{
		j = j - 1;
	}

	while(i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;

		while(arr[i] < key)
		{
			i = i + 1;
		}

		while(arr[j] >= key)
		{
			j = j - 1;
		}
	}

	temp = arr[head];
	arr[head] = arr[j];
	arr[j] = temp;

	return j;

}
  

