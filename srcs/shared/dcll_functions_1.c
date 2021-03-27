/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dcll_functions_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 09:51:03 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/27 09:03:17 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack *ft_dcllnew(int n)
{
    t_stack *s;

    s = (t_stack *)malloc(sizeof(t_stack));
    s->data = n;
    s->next = (struct t_stack *)s;
    s->prev = (struct t_stack *)s;
    return (s);
}

void	ft_dcll_addfront(t_stack *s, t_stack *new)
{
    new->next = (struct t_stack *)s;
	new->prev = s->prev;
	s = new;
}

int	ft_dcll_size(t_stack *s)
{
	int i;
	t_stack *p;

	i = 0;
	p = (t_stack *)s->next;
	while (p != s)
	{
		p = (t_stack *)p->next;
		i++;
	}
	return (i);
}

t_stack	*ft_dcll_last(t_stack *s)
{
	return ((t_stack *)s->prev);
}

void	ft_dcll_addback(t_stack *s, t_stack *new)
{
	t_stack *last;

	last = (t_stack *)s->prev;
	s->prev = (struct t_stack *)new;
	new->next = (struct t_stack *)s;
	last->next = (struct t_stack *)new;
	new->prev = (struct t_stack *)last;
}