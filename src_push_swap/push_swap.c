/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 17:49:10 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 18:05:13 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_operations(t_oper *oper)
{
	while (oper != NULL)
	{
		ft_putendl(oper->data);
		oper = oper->next;
	}
}

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;
	t_oper		*oper;

	if (ac > 1)
	{
		ac == 2 ? av = ft_strsplit(av[1], ' ') : ++av;
		if (!check_input(av))
		{
			ft_putendl(ERROR);
			exit(0);
		}
		fill_stack(&a, av);
		if (is_sorted(a) && !(b))
		{
			clear_memory(&a, &b);
			return (0);
		}
		sort_stack_a(&a, &b, stack_len(a), &oper);
		optim_operations(&oper);
		print_operations(oper);
		remove_oper(&oper);
		clear_memory(&a, &b);
	}
	return (0);
}
