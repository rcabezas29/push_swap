/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_nums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/31 18:39:50 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    sort_hundred(t_push_swap *ps)
{
    int i;
    
    i = 0;
    while (i <= ps->n - 1)
    {
        if (ps->a->data < get_media(ps))
        {
            push_b(ps);
            ft_putstr_fd("pb\n", 0);
        }
        else
        {
            ft_putstr_fd("ra\n", 0);
            ps->a = ps->a->next;
        }
        i++;
    }
    while (ps->b)
        order_b(ps);
    i = 0;
    while (i <= ps->n - 1)
    {
        if (ps->a->data > get_media(ps))
        {
            push_b(ps);
            ft_putstr_fd("pb\n", 0);
        }
        else
        {
            ft_putstr_fd("ra\n", 0);
            ps->a = ps->a->next;
        }
        i++;
    }
    while (ps->b)
        order_b(ps);
}

void    order_b(t_push_swap *ps)
{
    int pos;
    int n;
    int min;
    t_stack *aux;

    aux = ps->b;
    pos = 0;
    n = ft_dcll_size(ps->b);
    min = check_minimum(ps->b);
    while (aux->data != min)
    {
        aux = aux->next;
        pos++;
    }
    if (pos <= n / 2)
    {
        while (ps->b->data != min)
        {
            ft_putstr_fd("rb\n", 0);
            ps->b = ps->b->next;
        }
    }
    else
    {
        while (ps->b->data != min)
        {
            ft_putstr_fd("rrb\n", 0);
            ps->b = ps->b->prev;
        }
    }
    push_a(ps);
    ft_putstr_fd("pa\n", 0);
    ps->a = ps->a->next;
    ft_putstr_fd("ra\n", 0);
}