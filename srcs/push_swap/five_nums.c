/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:09:09 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/16 09:51:49 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	five_sort(t_push_swap *ps)
{
	int	i;

	i = 2;
	if (checking_order(ps))
		return ;
	while (ps->n == 5 && i != 0)
	{
		while (ps->a->data != ps->min && ps->a->data != ps->max)
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
		ft_putstr_fd("pb\n", 1);
		push_b(ps);
		i--;
	}
	if (ps->n == 4)
	{
		while (ps->a->data != ps->min)
			find_num_in_five(ps);
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
		if (ps->b->data < ps->b->next->data)
		{
			swap(ps->b);
			ps->b = ps->b->prev;
			ft_putstr_fd("sb\n", 1);
		}
		ft_putstr_fd("pa\n", 1);
		push_a(ps);
		ft_putstr_fd("ra\n", 1);
		ps->a = ps->a->next;
	}
	ft_putstr_fd("pa\n", 1);
	push_a(ps);
}

void	find_num_in_five(t_push_swap *ps)
{
	ft_putstr_fd("ra\n", 1);
	ps->a = ps->a->next;
}
