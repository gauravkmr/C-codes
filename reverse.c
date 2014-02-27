/* reverse a number */
#include<stdio.h>

int main()
{
	int num,reverse,treverse = 0;
	
	printf("enter an integer:  ");
	scanf("%d", &num);
	
	printf("initial condition:  %d\n", num);
	
	while(num > 0)
	{
		treverse = treverse*10 + num%10;
		num /= 10;
	}
	reverse = treverse;
	
	printf("final condition:  %d", reverse);
	
	return 0;
}