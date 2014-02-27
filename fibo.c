#include<stdio.h>

int fib(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;

	else
		return fib(n-1) + fib(n-2);
}

int main()
{
	int n, f;

	printf("which fibonacci term is required:  ");
	scanf("%d", &n);

	f = fib(n-1);
	printf("%d\n", f);

	return 0;
}
