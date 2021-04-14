/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_lot_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:20:21 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/14 09:00:11 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_a_lot(t_push_swap *ps)
{
	int	med_min_low;
	int	med_low;
	int med_low_media;
	int med_media_high;
	int	med_high;
	int	med_high_max;

	if (check_order_hundred(ps))
		return ;
	med_low = (get_media(ps) + ps->min) / 2;
	med_high = (get_media(ps) + ps->max) / 2;
	med_min_low = (ps->min + med_low) / 2;
	med_low_media = (med_low + get_media(ps)) / 2;
	med_media_high = (get_media(ps) + med_high) / 2;
	med_high_max = (med_high + ps->max) / 2;
	push_b_to_order(ps, ps->min, med_low);
	while (ps->b)
		order_b(ps);
	push_b_to_order(ps, med_low, get_media(ps));
	while (ps->b)
		order_b(ps);
	push_b_to_order(ps, get_media(ps), med_high);
	while (ps->b)
		order_b(ps);
	push_b_to_order(ps, med_high, ps->max);
	while (ps->b)
		order_b(ps);
}

void	push_b_to_order(t_push_swap *ps, int low, int high)
{
	int	i;

	i = 0;
	while (i <= ps->n - 1)
	{
		if (ps->a->data > low && ps->a->data <= high)
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
}