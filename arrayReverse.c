#include<stdio.h>
#include "gaurav.h"

int main()
{
	int ARR[8] = {15,7,9,4,3,6,9,67};
	int i;
	
//	int max = maximun(ARR, 7);
//	array_reverse(ARR, 7);
	array_partition(ARR, 0, 7);	
//	printf("maximum element: %d\n", max);

	for(i = 0; i < 8; i++)
		printf("%d  ", ARR[i]);
	printf("\n");
	
	return 0;
}
