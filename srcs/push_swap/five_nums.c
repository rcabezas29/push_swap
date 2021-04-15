/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:09:09 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/15 21:49:04 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	five_sort(t_push_swap *ps)
{
	if (checking_order(ps))
		return ;
	while (ps->a->data != ps->min)
	{
		ft_putstr_fd("ra\n", 1);
		ps->a = ps->a->next;
	}
	ft_putstr_fd("pb\n", 1);
	push_b(ps);
	if (ps->n == 5)
	{
		while (ps->a->data != ps->max)
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
		ft_putstr_fd("pb\n", 1);
		push_b(ps);
	}
	three_sort(ps);
	insertion(ps);
}

void	insertion(t_push_swap *ps)
{
	if (ps->n == 5)
	{
		ft_putstr_fd("pa\n", 1);
		push_a(ps);
		ft_putstr_fd("ra\n", 1);
		ps->a = ps->a->next;
	}
	ft_putstr_fd("pa\n", 1);
	push_a(ps);
}
