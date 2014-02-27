#include<stdio.h>
#include "gaurav.h"

int main()
{
	int q, r, i, j;
	int num, nxtprime, sqrt_num;

	printf("number??\n");
	scanf("%d", &num);

	sqrt_num = (int)sq_root((float)num);
	int fact[sqrt_num];
	
	if(num<2)
	{
		printf("invalid input\n");
		exit(0);
	}

	nxtprime = 2;
	q = num / nxtprime;	
	r = num % nxtprime;
	i = -1;

	while(r == 0 || q > nxtprime)
	{
		if(r == 0)
		{
			i++;
			fact[i] = nxtprime;
			num = q;
		}
		else
			nxtprime = getNextPrime(nxtprime);

		q = num / nxtprime;
		r = num % nxtprime;
	}	
	if(num > 1)
	{
		i++;
		fact[i] = num;
	}

	for(j = 0; j <= i; j++)
		printf("%d  ", fact[j]);
	printf("\n");
}
