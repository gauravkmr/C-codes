#include<stdio.h>

void Merge(int A[], int l1, int r1, int l2, int r2)
{
	int i;
	for(i = l1; i <= r2; i++)
		printf("%d  ", A[i]);
	printf("\n");

	int c1 = l1, c2 = l2;
	int B[r1 - l1 + r2 - l2 + 2];
	int k = 0;

	while(l1 <= r1 && l2 <= r2)
	{
		if(A[l1] < A[l2])
		{
			B[k] = A[l1];
			l1++;
			k++;
		}
		else
		{
			B[k] = A[l2];
			l2++;
			k++;
		}
	}
	
	while(l1 <= r1)	
	{
		B[k] = A[l1];
		l1++;
		k++;
	}

	while(l2 <= r2)
	{
		B[k] = A[l2];
		l2++;
		k++;
	}
	
	k = 0;
	for(i = c1; i <= r1; i++)
	{
		A[i] = B[k];
		k++;
	}

	for(i = c2; i <= r2; i++)
	{
		A[i] = B[k];
		k++;
	}
}

void SpecialMergeSort(int A[], int n)
{
	int l1, r1, l2, r2;
	l1 = r1 = 0;

	while(r1 < n-1 && A[r1] < A[r1+1])
	{
		r1++;
	}

	while(1)
	{
		l2 = r1 + 1;

		if(l2 == n)
			break;

		r2 = l2;
		while(r2 < n-1 && A[r2] < A[r2+1])
		{
			r2++;
		}

		Merge(A, l1, r1, l2, r2);
		r1 = r2;
	}

}

void Mergesort(int A[], int n, int m)
{
	if(n > m)
	{
		Mergesort(A + 0, (n+1)/2, m);
		Mergesort(A + (n+1)/2, n - (n+1)/2, m);
		Merge(A, 0, (n+1)/2 - 1, (n+1)/2, n-1);
	}
	else
	{
		SpecialMergeSort(A, n);
	}
}

int main()
{
	int A[50];
	int n, m, i;

	printf("enter size:\n");
	scanf("%d", &n);

	printf("enter elements:\n");
	for(i = 0; i < n; i++)
		scanf("%d", &A[i]);

	printf("enter size of chunk:\n");
	scanf("%d", &m );

	Mergesort(A, n, m);
	
	for(i = 0; i < n; i++)
		printf("%d  ", A[i]);
}
