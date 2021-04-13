/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_lot_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:20:21 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/13 15:44:23 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_a_lot(t_push_swap *ps)
{
	int	med_low;
	int	med_high;
	int	i;

	i = 0;
	if (check_order_hundred(ps))
		return ;
	med_low = (get_media(ps) + ps->min) / 2;
	med_high = (get_media(ps) + ps->max) / 2;
	while (i <= ps->n - 1)
	{
		if (ps->a->data <= med_low)
		{
			push_b(ps);
			ft_putstr_fd("pb\n", 1);
		}
		else
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
		i++;
	}
	while (ps->b)
		order_b(ps);
	i = 0;
	while (i <= ps->n - 1)
	{
		if (ps->a->data > med_low && ps->a->data <= get_media(ps))
		{
			push_b(ps);
			ft_putstr_fd("pb\n", 1);
		}
		else
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
		i++;
	}
	while (ps->b)
		order_b(ps);
	i = 0;
	while (i <= ps->n - 1)
	{
		if (ps->a->data <= med_high && ps->a->data > get_media(ps))
		{
			push_b(ps);
			ft_putstr_fd("pb\n", 1);
		}
		else
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
		i++;
	}
	while (ps->b)
		order_b(ps);
	i = 0;
	while (i <= ps->n - 1)
	{
		if (ps->a->data > med_high)
		{
			push_b(ps);
			ft_putstr_fd("pb\n", 1);
		}
		else
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
		i++;
	}
	while (ps->b)
		order_b(ps);
}