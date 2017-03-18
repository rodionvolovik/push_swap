/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optim_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 16:48:46 by rvolovik          #+#    #+#             */
/*   Updated: 2017/03/18 17:34:52 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	optim_operations(t_oper **oper)
{
	int		flag;
	int		all;

	all = 1;
	flag = 0;
	while (all && (*oper))
	{
		all = 0;
		optim_sasa(oper, &flag, &all);
		optim_sbsb(oper, &flag, &all);
		optim_pbpa(oper, &flag, &all);
		optim_rrara(oper, &flag, &all);
		optim_rrbrb(oper, &flag, &all);
		optim_rarb(oper, &flag, &all);
		optim_sasb(oper, &flag, &all);
		optim_rrarrb(oper, &flag, &all);
	}
}
