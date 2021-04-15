/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_nums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/15 12:27:15 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_hundred(t_push_swap *ps)
{
	int	med_low;
	int	med_high;
	int	i;

	i = 0;
	if (check_order_hundred(ps))
		return ;
	med_low = (get_media(ps) + ps->min) / 2;
	med_high = (get_media(ps) + ps->max) / 2;
	push_b_to_order(ps, ps->min, ps->med_low);
	push_b_to_order(ps, ps->med_low, get_media(ps));
	push_b_to_order(ps, get_media(ps), ps->med_high);
	push_b_to_order(ps, ps->med_high, ps->max);
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
	if (pos <= n / 2)
	{
		while (ps->b->data != min)
		{
			ft_putstr_fd("rb\n", 1);
			ps->b = ps->b->next;
			ps->x++;
		}
	}
	else
	{
		while (ps->b->data != min)
		{
			ft_putstr_fd("rrb\n", 1);
			ps->b = ps->b->prev;
			ps->x++;
		}
	}
	push_a(ps);
	ft_putstr_fd("pa\n", 1);
	ps->x++;
	ps->a = ps->a->next;
	ft_putstr_fd("ra\n", 1);
	ps->x++;
}

int	check_order_hundred(t_push_swap *ps)
{
	int		i;
	t_stack	*ori;
	t_stack	*fol;

	i = 0;
	ori = ps->a;
	while (i < ps->n - 1)
	{
		fol = ori->next;
		if (ori->data > fol->data || ps->b != NULL)
			return (0);
		ori = ori->next;
		i++;
	}
	return (1);
}
