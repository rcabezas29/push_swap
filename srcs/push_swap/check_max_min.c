/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 09:00:55 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/31 09:26:16 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	check_maximum(t_push_swap *ps)
{
	int max;
    t_stack *aux;

    max = 0;
    aux = ps->a->next;
    while (aux != ps->a)
    {
        if (aux->data > max)
            max = aux->data;
        aux = aux->next;
    }
    if (aux->data > max)
        max = aux->data;
    return (max);
}

int	check_minimum(t_push_swap *ps)
{
	int min;
    t_stack *aux;

    min = INT32_MAX;
    aux = ps->a->next;
    while (aux != ps->a)
    {
        if (aux->data < min)
            min = aux->data;
        aux = aux->next;
    }
    if (aux->data < min)
        min = aux->data;
    return (min);
}