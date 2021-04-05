/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dcll_functions_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:15:33 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/05 16:56:31 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_dcll_delback(t_stack *s)
{
	t_stack	*p;

	p = ft_dcll_last(s);
	free(p);
	p->next = s;
	s->prev = p->prev;
}

void	ft_dcll_clear(t_stack *s)
{
	t_stack	*p;

	p = (t_stack *)s->next;
	while (p != s)
	{
		free(p);
		p = (t_stack *)p->next;
		p->prev = ft_dcll_last(s);
	}
	free(s);
}

t_stack	*ft_create_node(int n)
{
	t_stack	*s;

	s = malloc(sizeof(t_stack));
	s->data = n;
	return (s);
}

void	ft_dcll_delone(t_stack *s)
{
	t_stack	*behind;
	t_stack	*infront;

	behind = s->prev;
	infront = s->next;
	free(s);
	s = NULL;
	behind->next = infront;
	infront->prev = behind;
}
