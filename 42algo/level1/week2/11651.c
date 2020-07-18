#include <stdio.h>
typedef struct	s_xy{
	int x;
	int y;
}				t_xy;

int qsoty(t_xy xy[],int l, int r);
void quicky(t_xy xy[],int l, int r);
int main()
{
	int a,aa,c;
	scanf("%d",&a);
	t_xy xy[100000];
	for(int b = 0;b<a;b++)
		scanf("%d %d",&xy[b].x,&xy[b].y);
	quicky(xy,0,a-1);
	for(int b = 0;b<a;b++)
		printf("%d %d\n",xy[b].x,xy[b].y);
}
int qsoty(t_xy xy[],int l, int r)
{
	int q,w,e;
	t_xy d;
	int low, high;

	low = l+1;
	high = r;
	d = xy[l];
	while(low < high)
	{
		while(low <=r && (d.y > xy[low].y))
		{
			low++;
		}
		while(high >=l && (d.y < xy[high].y))
		{
			high--;
		}
		if (low < high)
		{
			d = xy[low];
			xy[low] = xy[high];
			xy[high] = d;
		}
	}
	d = xy[l];
	xy[l] = xy[high];
	xy[high] = d;
	return (high);
}
void quicky(t_xy xy[],int l, int r)
{
	int kk;
	if (l<r)
	{
		kk = qsoty(xy,l,r);
		quicky(xy,l,kk-1);
		quicky(xy,kk+1,r);
	}
}

