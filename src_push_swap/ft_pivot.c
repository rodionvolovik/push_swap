/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pivot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 13:51:57 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 13:55:07 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *x, int size)
{
	int		i;
	int		j;
	int		swap;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (x[i] < x[j])
			{
				swap = x[i];
				x[i] = x[j];
				x[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int		ft_pivot(t_stack *a, int len)
{
	int		size;
	int		*x;
	int		i;
	t_stack	*ptr;

	ptr = a;
	size = len;
	i = 0;
	x = (int*)malloc(sizeof(int) * len);
	while (ptr && len--)
	{
		x[i++] = ptr->n;
		ptr = ptr->next;
	}
	i = 0;
	bubble_sort(x, size);
	i = x[size / 2];
	free(x);
	return (i);
}
