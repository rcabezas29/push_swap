/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/05/17 14:01:37 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	three_sort(t_push_swap *ps)
{
	if (!checking_order(ps))
	{
		if (ps->a->data > ps->a->next->data)
			ordering(ps);
		else
		{
			if (ps->a->data > ps->a->prev->data)
			{
				ft_putstr_fd("rra\n", 1);
				ps->a = ps->a->prev;
			}
			else
			{
				ft_putstr_fd("sa\n", 1);
				swap(ps->a);
				ps->a = ps->a->prev;
				ft_putstr_fd("ra\n", 1);
				ps->a = ps->a->next;
			}
		}
	}
}

void	ordering(t_push_swap *ps)
{
	if (ps->a->next->data > ps->a->prev->data)
	{
		ft_putstr_fd("sa\n", 1);
		swap(ps->a);
		ps->a = ps->a->prev;
		ft_putstr_fd("rra\n", 1);
		ps->a = ps->a->prev;
	}
	else
	{
		if (ps->a->prev->data > ps->a->data)
		{
			ft_putstr_fd("sa\n", 1);
			swap(ps->a);
			ps->a = ps->a->prev;
		}
		else
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
	}
}
