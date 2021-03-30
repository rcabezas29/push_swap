/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/30 10:41:27 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    bubble_sort(t_push_swap *ps)
{
    t_stack *sec;

    while (!check_order(ps))
    {
        sec = ps->a->next;
        if (ps->a->data < sec->data && ps->a->data > ps->a->prev->data)
        {
            ps->a = ps->a->prev;
        }
        else
        {
            swap(ps->a);
            ps->a = ps->a->prev;
            check_order(ps);
            if (ps->a->data < ps->a->next->data)
                ps->a = ps->a->prev;
            else
                ps->a = ps->a->next;
        }
    }
}