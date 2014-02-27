// kth smallest element
#include<stdio.h>

int main()
{
	int A[9] = {1,6,55,3,4,2,44,23,1};

	int l = 0;
	int u = 8;
	int k = 6;
	int flag = 0;                // flag doesn't become 1 if the current x(=A[k]) is the required element
	
	while(l < u)
	{
		int i = l;
		int j = u;
		int x = A[k];
	
		while(i <= k && j >= k)
		{
			while(A[i] < x)
			{
				i = i + 1;
			}

			while(A[j] > x)
			{
				j = j - 1;
			}

			while(i <= j)
			{
				int t = A[i];	
				A[i] =  A[j];
				A[j] = t;
		
				i++;
				j--;

				while(A[i] < x)
				{
					flag = 1;
					i++;	
				}
				while(A[j] > x)
				{
					flag = 1;
					j = j - 1;
				}
			}
		}
		
		if(flag == 0)
			break;
		else if(k > j)
		{
			l = i;
			flag = 0;
		}
		else if(k < i)
		{
			u = j;
			flag = 0;
		}
	}

	printf("%d\n", A[k]);
}
