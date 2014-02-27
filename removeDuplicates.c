#include<stdio.h>
#include "gaurav.h"

int main()
{
	int ARR[8] = {5,2,2,3,3,4,9,8};
	int i;
	
	int newlen = rmv_duplicates(ARR, 8);
		
	for(i = 0; i < newlen; i++)
		printf("%d  ", ARR[i]);
	printf("\n");
		
	return 0;
}
