#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list{
	int aa;
	struct s_list *next;
}			t_list;
t_list *mk_new(int a)
{
	t_list *n;
	n = malloc(sizeof(t_list));
	n->aa = a;
	return (n);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	t_list *start;
	t_list *input;
	t_list *dell;
	start = malloc(sizeof(t_list));
	start->aa = 1;
	input = start;
	for (int i = 2; i <= a; i++)
	{
		input->next = mk_new(i);
		input = input->next;
	}
	input->next = start;
	printf("<");
	while(1)
	{
		for(int i = 0;i<b-1;i++)
		{
			input = input->next;
		}
		if (input == input->next)
		{
			printf("%d>",input->aa);
			free(input);
			break;
		}
		else
		{
			printf("%d, ",input->next->aa);
			dell = input->next;
			input->next = input->next->next;
			free(dell);
		}
	}
}
