#include <stdio.h>
typedef struct s_b{
	int b[2];
	char c[101];
}				t_b;
void ft_quick(int left, int right, t_b bc[]);
int ft_sort(int left, int right, t_b bc[]);
void swap(int a, int b, t_b bc[]);
int main()
{
	int a,i,bb;
	scanf("%d",&a);
	t_b bc[a+1];
	i = 0;
	while(i < a)
	{
		scanf("%d %s",&bc[i].b[0],bc[i].c);
		bc[i].b[1] = i;
		i++;
	}
	ft_quick(0,a-1,bc);
	for(i = 0;i<a;i++)
		printf("%d %s\n",bc[i].b[0],bc[i].c);
}
void swap(int a, int b, t_b bc[])
{
	t_b ss;
	ss = bc[a];
	bc[a] = bc[b];
	bc[b] = ss;
}
int ft_sort(int left, int right, t_b bc[])
{
	int low, high, set;
	set = left;
	low = left + 1;
	high = right;
	while (low <= high)
	{
		while (bc[set].b[0] >= bc[low].b[0])
		{
			if (bc[set].b[0] == bc[low].b[0])
			{
				if (bc[set].b[1] > bc[low].b[1])
					low++;
				else
					break;
			}
			else
				low++;
		}
		while (bc[set].b[0] <= bc[high].b[0])
		{
			if (bc[set].b[0] == bc[high].b[0])
			{
				if (bc[set].b[1] < bc[high].b[1])
					high--;
				else
					break;
			}
			else
				high--;
		}
		if (low <= high)
			swap(low,high,bc);	
	}
	swap(left,high,bc);
	return (high);
}

void ft_quick(int left, int right, t_b bc[])
{
	int qq;
	if (left <= right)
	{
		qq = ft_sort(left, right, bc);
		ft_quick(left,qq-1,bc);
		ft_quick(qq+1,right,bc);
	}
}

