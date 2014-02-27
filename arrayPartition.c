#include<stdio.h>
#include "gaurav.h"

int main()
{
	int A[] = {20,5,7,3,21,20,4,7,88,2,3, 4, 5, 5, 17,16, 20, 01, 20};
	int i, j;

	printf("original array:\n");
	for(i = 0; i < 19; i++)
		printf("%d  ", A[i]);
	printf("\n");

	//void array_partition(int arr[], int head, int tail);
	array_partition(A, 0, 18);

	printf("after partition:\n");
	for(i = 0; i < 19; i++)
		printf("%d  ", A[i]);
	printf("\n");

	return 0;
}
