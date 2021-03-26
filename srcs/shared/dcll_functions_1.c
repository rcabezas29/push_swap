/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dcll_functions_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 09:51:03 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 12:17:29 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack *ft_dcllnew(int n)
{
    t_stack *s;

    s = (t_stack *)malloc(sizeof(t_stack));
    s->data = n;
    s->next = s->prev;
    s->prev = s->next;
    return (s);
}

void	ft_dcll_addfront(t_stack *s, t_stack *new)
{
    new->next = s;
	new->prev = s->prev;
	s = new;
}

int	ft_dcll_size(t_stack *s)
{
	int i;
	t_stack *p;

	p = s->next;
	while (p != s)
	{
		p = p->next;
		i++;
	}
	return (i);
}

t_stack	*ft_dcll_last(t_stack *s)
{
	return (s->prev);
}

void	ft_dcll_addback(t_stack *s, t_stack *new)
{
	new->prev = s->prev;
	new->next = s;
}