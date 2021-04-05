/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 09:00:55 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/05 16:31:33 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	check_maximum(t_stack *s)
{
	int		max;
	t_stack	*aux;

	max = 0;
	aux = s->next;
	while (aux != s)
	{
		if (aux->data > max)
			max = aux->data;
		aux = aux->next;
	}
	if (aux->data > max)
		max = aux->data;
	return (max);
}

int	check_minimum(t_stack *s)
{
	int		min;
	t_stack	*aux;

	min = INT32_MAX;
	aux = s->next;
	while (aux != s)
	{
		if (aux->data < min)
			min = aux->data;
		aux = aux->next;
	}
	if (aux->data < min)
		min = aux->data;
	return (min);
}
