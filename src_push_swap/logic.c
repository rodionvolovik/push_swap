/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 17:55:07 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 17:55:12 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		need_push(t_stack *head, int id, int len, int pivot)
{
	t_stack	*ptr;

	ptr = head;
	while (len--)
	{
		if (id == 1 && ptr->n < pivot)
			return (1);
		else if (id == 2 && ptr->n > pivot)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}

void	backtrack_stack_a(t_stack **a, int r, t_oper **oper)
{
	if (r > stack_len(*a) / 2)
		while (stack_len(*a) - r++ > 0)
			add_oper(oper, RA);
	else
		while (r--)
			add_oper(oper, RRA);
}

int		sort_stack_a(t_stack **a, t_stack **b, int len, t_oper **oper)
{
	int		pivot;
	int		p;
	int		r;
	int		i;

	r = 0;
	i = 0;
	p = 0;
	if (len <= 3)
		return (ft_sort_a(a, len, oper));
	pivot = ft_pivot(*a, len);
	while (need_push(*a, 1, len - i, pivot) && i++ < len)
		if ((*a)->n < pivot && ++p)
			add_oper(oper, PB);
		else
		{
			add_oper(oper, RA);
			r++;
		}
	backtrack_stack_a(a, r, oper);
	sort_stack_a(a, b, len - p, oper);
	sort_stack_b(a, b, p, oper);
	while (p--)
		add_oper(oper, PA);
	return (0);
}

void	backtrack_stack_b(t_stack **b, int r, t_oper **oper)
{
	if (r > stack_len(*b) / 2)
		while (stack_len(*b) - r++ > 0)
			add_oper(oper, RB);
	else
		while (r--)
			add_oper(oper, RRB);
}

int		sort_stack_b(t_stack **a, t_stack **b, int len, t_oper **oper)
{
	int		pivot;
	int		p;
	int		r;
	int		i;

	r = 0;
	i = 0;
	p = 0;
	if (len <= 3)
		return (ft_sort_b(b, len, oper));
	pivot = ft_pivot(*b, len);
	while (need_push(*b, 2, len - i, pivot) && i++ < len)
		if ((*b)->n > pivot && ++p)
			add_oper(oper, PA);
		else
		{
			add_oper(oper, RB);
			r++;
		}
	sort_stack_a(a, b, p, oper);
	backtrack_stack_b(b, r, oper);
	sort_stack_b(a, b, len - p, oper);
	while (p--)
		add_oper(oper, PB);
	return (0);
}
