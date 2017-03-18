/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_oper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 13:51:21 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 13:51:31 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		remove_oper(t_oper **head)
{
	if (*head)
	{
		if ((*head)->next)
			remove_oper(&(*head)->next);
		ft_strdel(&(*head)->data);
		free((*head)->next);
	}
}

void		add_oper(t_oper **head, char *data)
{
	t_oper	*current;
	t_oper	*new;

	current = *head;
	if (!ft_strequ(data, ""))
	{
		if (current)
		{
			if (current->next == NULL)
			{
				new = (t_oper*)malloc(sizeof(t_oper));
				new->data = ft_strdup(data);
				new->next = NULL;
				current->next = new;
				return ;
			}
			else
				return (add_oper(&(current)->next, data));
		}
		(*head) = (t_oper*)malloc(sizeof(t_oper));
		(*head)->data = ft_strdup(data);
		(*head)->next = NULL;
	}
}
