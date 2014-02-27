#include<stdio.h>

int partition(int arr[], int head, int tail)
{
	int i, j, key, temp;
	key = arr[tail];
	i = head - 1;

	for(j = head; j < tail; j++)
	{
		if(arr[j] <= key)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	i++;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

	return i;
}


void quicksort(int A[], int head, int tail)
{
	int q;
	
	if(head < tail)
	{
		q = partition(A, head, tail);
		quicksort(A, head, q-1);
		quicksort(A, q+1, tail);
	}
}

int main()
{
	int n, i;
	
	printf("size:  ");
	scanf("%d", &n);

	int A[n];

	for(i = 0; i < n; i++)
		scanf("%d", &A[i]);

	quicksort(A, 0, n-1);
//	p =array_partition(A, 0 ,n-1, 3);

//	printf("%d\n", p);
	for(i = 0; i < n; i++)
		printf("%d  ", A[i]);

}
