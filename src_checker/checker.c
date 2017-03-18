/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 12:53:51 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 12:55:14 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	break_programm(t_stack **a, t_stack **b)
{
	clear_memory(a, b);
	ft_putendl(ERROR);
	exit(0);
}

void	init_commands(char *comm, t_stack **a, t_stack **b)
{
	if (!ft_strcmp(comm, "sa"))
		SA;
	else if (!ft_strcmp(comm, "sb"))
		SB;
	else if (!ft_strcmp(comm, "ss"))
		SS;
	else if (!ft_strcmp(comm, "pa"))
		PA;
	else if (!ft_strcmp(comm, "pb"))
		PB;
	else if (!ft_strcmp(comm, "ra"))
		RA;
	else if (!ft_strcmp(comm, "rb"))
		RB;
	else if (!ft_strcmp(comm, "rr"))
		RR;
	else if (!ft_strcmp(comm, "rra"))
		RRA;
	else if (!ft_strcmp(comm, "rrb"))
		RRB;
	else if (!ft_strcmp(comm, "rrr"))
		RRR;
	else
		break_programm(a, b);
}

void	read_commands(t_stack **a, t_stack **b)
{
	char	*line;

	while (get_next_line(0, &line))
		init_commands(line, a, b);
}

void	checker(char **stack, t_stack **a)
{
	t_stack *b;

	b = NULL;
	if (!check_input(stack))
	{
		ft_putendl(ERROR);
		exit(0);
	}
	fill_stack(a, stack);
	read_commands(a, &b);
	is_sorted(*a) ? printf("OK\n") : printf("KO\n");
}

int		main(int ac, char **av)
{
	char	**comm;
	t_stack	*a;

	a = NULL;
	if (ac > 1)
	{
		ac == 2 ? av = ft_strsplit(av[1], ' ') : ++av;
		checker(av, &a);
	}
}
