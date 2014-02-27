/* base conversion */
#include<stdio.h>

#define BASE 16

int main()
{
	int num, final_num = 0;
	int r, q, ten = 1;;

	printf("enter decimal number:");
	scanf("%d", &num);

	printf("decimal:  %d\n", num);
	while(num > BASE)
	{
		r = num % BASE;
		num = num / BASE;

		final_num = final_num + r * ten;
		ten *= 10;
	}
	
	final_num = final_num + num * ten;

	printf("octal:  %d\n", final_num);

	return 0;
}
