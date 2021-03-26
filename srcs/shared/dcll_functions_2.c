/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dcll_functions_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:15:33 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 15:51:24 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_dcll_delback(t_stack *s)
{
	t_stack *p;

	p = ft_dcll_last(s);
	free(p);
	p->next = (struct t_stack *)s;
	s->prev = p->prev;
}

void	ft_dcll_delfirst(t_stack *s)
{
	t_stack *p;

	p = ft_dcll_last(s);
	free(s);
	s = (t_stack *)s->next;
	p->next = (struct t_stack *)s;
	s->prev = (struct t_stack *)p;
}

void	ft_dcll_clear(t_stack *s)
{
	t_stack *p;

	p = (t_stack *)s->next;
	while (p != s)
	{
		free(p);
		p = (t_stack *)p->next;
		p->prev = (struct t_stack *)ft_dcll_last(s);
	}
	free(s);
}

t_stack *ft_create_node(int n)
{
    t_stack *s;

    s = (t_stack *)malloc(sizeof(t_stack));
    s->data = n;
    return (s);
}

void	ft_dcll_delone(t_stack *s)
{
	t_stack *p;

	p = s;
	free(p);
	p->next = s->next;
	p->prev = s->prev;
}