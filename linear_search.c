/* recurrsive version of linear search */
#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

linear_search(int A[], int s, int k)
{
	if(A[s-1] == k)
		return (s-1);
		
	else
	{
		s -= 1;
		linear_search(A, s, k);
	}
}

int main()
{
	int A[SIZE];
	int i, key, pos;
	
	printf("enter elements\n");
	for(i = 0; i < SIZE; i++)
		scanf("%d", &A[i]);
		
	printf("key to be searched..\n");
	scanf("%d", &key);
	
	pos = linear_search(A, SIZE, key);
	
	printf("\n%d = A[%d]\n", key, pos);
	
	return 0;
}