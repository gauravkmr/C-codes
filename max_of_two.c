/* larger of two numbers */
#include<stdio.h>

int main()
{
	double num1, num2, max;
	
	printf("enter two numbers, i will give u the lager one....\n");
	scanf("%lf %lf", &num1, &num2);
	
	max = (num1 > num2) ? num1 : num2;
	
	printf("larger number:  %lf", max);
	
	return 0;
}