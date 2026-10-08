#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int sum = 0;
	if (scanf("%d", &n) != 1 || n <= 0)
	{
		printf("输入无效");
		return 1;
	}
	int* p = (int*)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf("内存不足");
		return 1;
	}
	for (int i = 0;i < n;i++)
	{
		p[i] = 3 * i + 1;
		sum += p[i];
	}
	double average = (double)sum / n;
	printf("%.2lf", average);
	free(p);
	p = NULL;
	return 0;
}
