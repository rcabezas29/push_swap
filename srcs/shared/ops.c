/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:59:16 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/16 21:05:50 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap(t_stack *stack)
{
	t_stack	*aux;

	aux = stack->next;
	ft_dcll_addfront(stack, ft_create_node(aux->data));
	ft_dcll_delone(stack->next);
}

void	push_b(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = NULL;
	if (!ps->a)
		return ;
	if (!ps->b)
		ps->b = ft_dcllnew(ps->a->data);
	else
	{
		ft_dcll_addfront(ps->b, ft_dcllnew(ps->a->data));
		ps->b = ps->b->prev;
	}
	if (ps->a == NULL)
		return ;
	else if (ps->a == ps->a->next)
	{
		ps->a = NULL;
		free(ps->a);
	}
	else
		help_push_b(ps, tmp);
}

void	help_push_b(t_push_swap *ps, t_stack *tmp)
{
	tmp = ps->a->prev;
	tmp->next = ps->a->next;
	ps->a->next->prev = tmp;
	free(ps->a);
	ps->a = NULL;
	ps->a = tmp->next;
}

void	push_a(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = NULL;
	if (!ps->b)
		return ;
	if (!ps->a)
		ps->a = ft_dcllnew(ps->b->data);
	else
	{
		ft_dcll_addfront(ps->a, ft_dcllnew(ps->b->data));
		ps->a = ps->a->prev;
	}
	if (ps->b == NULL)
		return ;
	else if (ps->b == ps->b->next)
	{
		free(ps->b);
		ps->b = NULL;
	}
	else
		help_push_a(ps, tmp);
}

void	help_push_a(t_push_swap *ps, t_stack *tmp)
{
	tmp = ps->b->prev;
	tmp->next = ps->b->next;
	ps->b->next->prev = tmp;
	free(ps->b);
	ps->b = NULL;
	ps->b = tmp->next;
}
