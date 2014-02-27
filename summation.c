/* 1 -3 5 -7 9 ... */
#include<stdio.h>

int main()
{
	int n, i;
	int sum, term = 1, act_term, sign = 1;
	
	printf("number of terms...\n");
	scanf("%d", &n);
	
	for(i = 1; i<=n; i++)
	{
		act_term = term*sign;
		printf("%d   ", act_term);
		
		sign = sign*(-1);
		term = term + 2;
	}
	
	return 0;
}