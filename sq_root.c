#include<stdio.h>

#define ERR 0.0001

int main()
{
	float num;
	float g1 = 0, g2 = 0, root;

	printf("which number square root is desired: ");
	scanf("%f", &num);

	g2 = num/2;

	do{
		g1 = g2;
		g2 = (g1 + (num/g1))/2;

	}while(( (g1-g2) > ERR ) || ( (g1 - g2) < (-ERR) ));

	root = g2;

	printf("square root of %f is %f\n", num, root);

	return 0;
}
