/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_lot_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:20:21 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/23 08:48:09 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_a_lot(t_push_swap *ps)
{
	if (checking_order(ps))
		return ;
	ps->med_low = (get_media(ps) + ps->min) / 2;
	ps->med_high = (get_media(ps) + ps->max) / 2;
	ps->med_min_low = (ps->min + ps->med_low) / 2;
	ps->med_low_media = (ps->med_low + get_media(ps)) / 2;
	ps->med_media_high = (get_media(ps) + ps->med_high) / 2;
	ps->med_high_max = (ps->med_high + ps->max) / 2;
	push_b_to_order(ps, ps->min, ps->med_min_low);
	push_b_to_order(ps, ps->med_min_low, ps->med_low);
	push_b_to_order(ps, ps->med_low, ps->med_low_media);
	push_b_to_order(ps, ps->med_low_media, get_media(ps));
	push_b_to_order(ps, get_media(ps), ps->med_media_high);
	push_b_to_order(ps, ps->med_media_high, ps->med_high);
	push_b_to_order(ps, ps->med_high, ps->med_high_max);
	push_b_to_order(ps, ps->med_high_max, ps->max);
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
	while (ps->b)
		order_b(ps);
}

void	order_b(t_push_swap *ps)
{
	int		pos;
	int		n;
	int		min;
	t_stack	*aux;

	aux = ps->b;
	pos = 0;
	n = ft_dcll_size(ps->b);
	min = check_minimum(ps->b);
	while (aux->data != min)
	{
		aux = aux->next;
		pos++;
	}
	while (ps->b->data != min)
		go_to_min(ps, pos, n);
	push_a(ps);
	ft_putstr_fd("pa\n", 1);
	ps->a = ps->a->next;
	ft_putstr_fd("ra\n", 1);
}

void	go_to_min(t_push_swap *ps, int pos, int n)
{
	if (pos <= n / 2)
	{
		ft_putstr_fd("rb\n", 1);
		ps->b = ps->b->next;
	}
	else
	{
		ft_putstr_fd("rrb\n", 1);
		ps->b = ps->b->prev;
	}
}
