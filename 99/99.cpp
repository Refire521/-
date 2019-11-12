#include<stdio.h>
#define N 20
int main()
{
	int a[N];
	int i, j, t;
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (j = 0; j < N - 1; j++)
	{
		for(i=0;i=N-1-j;i++)
			if (a[i] < a[i + 1])
			{
				t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
			}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}