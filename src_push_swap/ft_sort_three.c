/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:17:18 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 18:17:21 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_asc(t_stack **a, int len, t_oper **oper)
{
	while (len-- > 1)
	{
		if ((*a)->n > (*a)->next->n)
		{
			add_oper(oper, SA);
			add_oper(oper, RA);
		}
		else
			add_oper(oper, RA);
	}
	while (++len < 3)
	{
		add_oper(oper, RRA);
		if ((*a)->n > (*a)->n)
			add_oper(oper, SA);
	}
	if ((*a)->n > (*a)->next->n)
		add_oper(oper, SA);
	return (0);
}

int		ft_sort_desc(t_stack **b, int len, t_oper **oper)
{
	while (len-- > 1)
	{
		if ((*b)->n < (*b)->next->n)
		{
			add_oper(oper, SB);
			add_oper(oper, RB);
		}
		else
			add_oper(oper, RB);
	}
	while (++len < 3)
	{
		add_oper(oper, RRB);
		if ((*b)->n < (*b)->n)
			add_oper(oper, SB);
	}
	if ((*b)->n < (*b)->next->n)
		add_oper(oper, SB);
	return (0);
}
