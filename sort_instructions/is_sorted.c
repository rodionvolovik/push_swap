/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 12:46:53 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 12:46:59 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_stack *a)
{
	t_stack	*ptr;
	int		f;

	f = 1;
	ptr = a;
	while (ptr && ptr->next)
	{
		if (ptr->n > ptr->next->n)
			f = 0;
		ptr = ptr->next;
	}
	return (f);
}

int		is_revsorted(t_stack *a)
{
	t_stack	*ptr;
	int		f;

	f = 1;
	ptr = a;
	while (ptr->next)
	{
		if (ptr->n < ptr->next->n)
			f = 0;
		ptr = ptr->next;
	}
	return (f);
}
