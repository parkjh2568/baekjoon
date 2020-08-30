#include <stdio.h>
long long sum(int *a, int n)
{
	int out = 0;
	for(int i = 0; i < n; i++)
	{
		out += a[i];
	}
	return (out);
}
