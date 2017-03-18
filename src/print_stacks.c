/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 12:50:34 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 12:51:08 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	t_stack	*a1;
	t_stack	*b1;

	a1 = a;
	b1 = b;
	if (a1)
	{
		while (a1)
		{
			printf("%2d\t", a1->n);
			a1 = a1->next;
		}
	}
	printf("%2c %2c\n", '|', 'a');
	if (b1)
	{
		while (b1)
		{
			printf("%2d\t", b1->n);
			b1 = b1->next;
		}
	}
	printf("%2c %2c\n", '|', 'b');
}
