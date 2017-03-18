/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 12:46:33 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 12:46:39 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*push(t_stack **a, t_stack **b, int id)
{
	t_stack	*tmp;

	tmp = *b;
	if (!tmp)
		return ("");
	(*b) = (*b)->next;
	tmp->next = (*a);
	(*a) = tmp;
	if (id == 1)
		return ("pa");
	return ("pb");
}
