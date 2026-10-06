#include<stdio.h>
int main()
{
	int odd_sum = 0;
	for (int i = 1;i <= 100;i++)
	{
		if (i % 2 != 0)
		{
			odd_sum += i;
		}
	}
	printf("%d", odd_sum);
	return 0;
}
