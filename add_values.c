/* summation */
#include<stdio.h>

int main()
{
	int sum = 0;
	int n, i, val;
	
	printf("enter number of numbers to be added...\n");
	scanf("%d", &n);
	
	printf("enter values:\n");
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &val);
		sum += val;
	}
	
	printf("sum: %d", sum);

	return 0;
}