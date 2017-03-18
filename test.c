#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_stack {
	int		data;
	struct s_stack *next;
}				t_stack;

int		main(void)
{
	int		i = 0;
	t_stack	*a;
	t_stack	*out;

	a = (t_stack*)malloc(sizeof(t_stack));
	a->data = 5;
	a->next = NULL;
	t_stack	*b = a;
	out = a;
	while (i++ < 5)
	{
		a->next = (t_stack*)malloc(sizeof(t_stack));
		a->next->data = i;
		a->next->next = NULL;
		a = a->next;
	}
	while (out)
	{
		printf("%3d", out->data);
		out = out->next;
	}
	printf("\n");
	i = 0;
	t_stack	*prev;
	t_stack	*first;
	t_stack	*second;

	out = b;




	while (b->next)
	{
		prev = b;
		first = b->next;
		second = first->next;
		if (first->data == 1 && second->data == 2)
		{
			prev->next = NULL;
			prev->next = second->next;
			free(first);
			first = NULL;
			free(second);
			second = NULL;
			b = prev->next;
		}
		else
			b = b->next;
	}




	
	while (out)
	{
		printf("%3d", out->data);
		out = out->next;
	}
	// while (1)
	// 	;
	return (0);
}