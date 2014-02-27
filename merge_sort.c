/* merge sort algorithm */
#include<stdio.h>

void merge(int A[], int low, int mid, int high)
{
	int n1, n2, i, j, k;
	int L[25], R[25];
	
	n1 = mid - low + 1;
	n2 = high - mid;
	
	for(i = 0; i < n1; i++)
		L[i] = A[low + i];
		
	for(j = 0; j < n2; j++)
		R[j] = A[mid + 1 + j];
		
	L[n1] = 30000;
	R[n2] = 30000;
	
	i = 0;
	j = 0;
	
	for(k = low; k <= high; k++)
	{
		if(L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
	}
}

void merge_sort(int A[], int low, int high)
{
	int mid;
	
	if(low < high)
	{
		mid = (low+ high)/2;
		merge_sort(A, low, mid);
		merge_sort(A, (mid+1), high);
		
		merge(A, low, mid, high);
	}
	
}sa

int main()
{
	int A[50];
	int length, i, x;
	
//	printf("size of array input:  ");
	scanf("%d", &length);
	
//	printf("enter elements:\n");
	for(i = 0; i < length; i++)
	{
		scanf("%d", &A[i]);
	}
	
	merge_sort(A, 0, (length-1));
	
	for(x = 0; x < length; x++)
		printf("%d  ", A[x]);
		
	return 0;
}
