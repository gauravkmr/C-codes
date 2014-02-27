/* generate sine series */
#include<stdio.h>
#define ERROR 1.0e-6

int main()
{
	double x, x2, term, tsin, sin;
	int i = 1;
	
	printf("enter value of 'x' in sin(x), [-1,1]:  ");
	scanf("%lf", &x);
	
	x2 = x*x;
	term = x;
	tsin = x;

	while((term >= ERROR) || (term <= (-ERROR)))
	{
		i = i + 2;
		term = (-1) * (term * x2 / (i * (i-1)));
		tsin = tsin + term;
	}
	
	sin = tsin;
	
	printf("sin(%lf) is  %lf", x, sin);
	
	return 0;
}