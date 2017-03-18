#include "push_swap.h"

void	optim_sasa(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;
	t_oper	*first;
	t_oper	*second;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next && tmp->next->next)
		{
			prev = tmp;
			first = tmp->next;
			second = first->next;
			if (ft_strequ(first->data, "sa") && ft_strequ(second->data, "sa") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else
				tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}

void	optim_sbsb(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;
	t_oper	*first;
	t_oper	*second;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next && tmp->next->next)
		{
			prev = tmp;
			first = tmp->next;
			second = first->next;
			if (ft_strequ(first->data, "sb") && ft_strequ(second->data, "sb") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else
				tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}

void	optim_pbpa(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;
	t_oper	*first;
	t_oper	*second;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next && tmp->next->next)
		{
			prev = tmp;
			first = tmp->next;
			second = first->next;
			if (ft_strequ(first->data, "pa") && ft_strequ(second->data, "pb") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else if (ft_strequ(first->data, "pb") && ft_strequ(second->data, "pa") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else
				tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}

void	optim_rrara(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;
	t_oper	*first;
	t_oper	*second;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next && tmp->next->next)
		{
			prev = tmp;
			first = tmp->next;
			second = first->next;
			if (ft_strequ(first->data, "ra") && ft_strequ(second->data, "rra") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else if (ft_strequ(first->data, "rra") && ft_strequ(second->data, "ra") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else
				tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}

void	optim_rrbrb(t_oper **oper, int *flag, int *all)
{
	t_oper	*tmp;
	t_oper	*prev;
	t_oper	*first;
	t_oper	*second;

	while (1)
	{
		*flag = 0;
		tmp = (*oper);
		while (tmp->next && tmp->next->next)
		{
			prev = tmp;
			first = tmp->next;
			second = first->next;
			if (ft_strequ(first->data, "rb") && ft_strequ(second->data, "rrb") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else if (ft_strequ(first->data, "rrb") && ft_strequ(second->data, "rb") && (*flag = 1))
			{
				prev->next = second->next;
				ft_strdel(&second->data);
				free(second);
				second = NULL;
				ft_strdel(&first->data);
				free(first);
				first = NULL;
				tmp = prev->next;
			}
			else
				tmp = tmp->next;
		}
		if (*flag == 0)
			break ;
		else
			*all = 1;
	}
}