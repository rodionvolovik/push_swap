/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optim2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 18:44:47 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 18:44:50 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	optim_rarb(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next)
		{
			if (ft_strequ(tmp->data, "ra")
				&& ft_strequ(tmp->next->data, "rb") && (*flag = 0))
			{
				prev->next = tmp->next;

				ft_strdel(&tmp->data);
				tmp->next = NULL;

				ft_strdel(&tmp->next->data);
				tmp->next->data = ft_strdup("rr");
			}
			if (ft_strequ(tmp->data, "rb")
				&& ft_strequ(tmp->next->data, "ra") && (*flag = 0))
			{
				prev->next = tmp->next;

				ft_strdel(&tmp->data);
				tmp->next = NULL;
				
				
				ft_strdel(&tmp->next->data);
				tmp->next->data = ft_strdup("rr");
			}
			prev = tmp;
			tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}

void	optim_sasb(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next)
		{
			if (ft_strequ(tmp->data, "sa")
				&& ft_strequ(tmp->next->data, "sb") && (*flag = 0))
			{
				prev->next = tmp->next;

				ft_strdel(&tmp->data);
				tmp->next = NULL;
				
				
				ft_strdel(&tmp->next->data);
				tmp->next->data = ft_strdup("ss");
			}
			if (ft_strequ(tmp->data, "sb")
				&& ft_strequ(tmp->next->data, "sa") && (*flag = 0))
			{
				prev->next = tmp->next;

				ft_strdel(&tmp->data);
				tmp->next = NULL;
				
				
				ft_strdel(&tmp->next->data);
				tmp->next->data = ft_strdup("ss");
			}
			prev = tmp;
			tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}

void	optim_rrarrb(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next)
		{
			if (ft_strequ(tmp->data, "rra")
				&& ft_strequ(tmp->next->data, "rrb") && (*flag = 0))
			{
				prev->next = tmp->next;

				ft_strdel(&tmp->data);
				tmp->next = NULL;
				
				
				ft_strdel(&tmp->next->data);
				tmp->next->data = ft_strdup("rrr");
			}
			if (ft_strequ(tmp->data, "rrb")
				&& ft_strequ(tmp->next->data, "rra") && (*flag = 0))
			{
				prev->next = tmp->next;

				ft_strdel(&tmp->data);
				tmp->next = NULL;
				
				
				ft_strdel(&tmp->next->data);
				tmp->next->data = ft_strdup("rrr");
			}
			prev = tmp;
			tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}
