/* maximum profit on selling when the price fluctuate every day */
#include<stdio.h>

int main()
{
	float price[5], max;
	int i, day;

	printf("enter selling price on 5 consecutive days:\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%f", &price[i]);
	}
	max = 0;
	for(day = 0; day < 5; day++)
		for(i = day; i < 5; i++)
		{
			if((price[i] - price[day]) > max)
				max = price[i] - price[day];
		}

	printf("maximum profit:  %f\n", max);

	return 0;

}
