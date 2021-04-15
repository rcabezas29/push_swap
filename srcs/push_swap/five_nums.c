/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:09:09 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/15 12:08:49 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	five_sort(t_push_swap *ps)
{
	int	n;

	if (check_order_five(ps))
		return ;
	n = ps->n - 3;
	while (n-- > 0)
	{
		ft_putstr_fd("pb\n", 1);
		push_b(ps);
	}
	three_sort(ps);
	insertion(ps);
}

int	check_order_five(t_push_swap *ps)
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

void	insertion(t_push_swap *ps)
{
	while (!check_order_five(ps))
	{
		if (ps->b)
		{
			push_a(ps);
			ft_putstr_fd("pa\n", 1);
		}
		if (ps->a->data == ps->max || ps->a->data > ps->a->prev->data)
		{
			ft_putstr_fd("ra\n", 1);
			ps->a = ps->a->next;
		}
		else if (ps->a->data == ps->min || ps->a->data < ps->a->next->data)
			continue ;
		else
		{
			while (!(ps->a->data < ps->a->next->data
					&& ps->a->data > ps->a->prev->data))
				find_place_five(ps);
		}
	}
}

void	find_place_five(t_push_swap *ps)
{
	swap(ps->a);
	ps->a = ps->a->prev;
	ft_putstr_fd("sa\n", 1);
	ft_putstr_fd("ra\n", 1);
	ps->a = ps->a->next;
}
