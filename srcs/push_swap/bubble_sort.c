/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/29 18:08:24 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    bubble_sort(t_push_swap *ps)
{
    t_stack *sec;

    while (!check_order(ps))
    {
        sec = ps->a->next;
        if (ps->a > sec)
        {
            swap(ps->a);
            ps->a = ps->a->prev;
        }
        ps->a = ps->a->next;
    }
}