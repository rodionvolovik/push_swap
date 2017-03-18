/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 13:55:14 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 16:48:05 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		stack_len(t_stack *a)
{
	t_stack	*ptr;
	int		len;

	len = 0;
	ptr = a;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
