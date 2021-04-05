/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_nums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/05 15:04:22 by rcabezas         ###   ########.fr       */
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
            ft_putstr_fd("pb\n", 1);
            ps->x++;
        }
        else
        {
            ft_putstr_fd("ra\n", 1);
            ps->a = ps->a->next;
            ps->x++;
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
            /*if (ps->a->data == check_minimum(ps->a))
            {
                
            }*/
            push_b(ps);
            ft_putstr_fd("pb\n", 1);
            ps->x++;
        }
        else
        {
            ft_putstr_fd("ra\n", 1);
            ps->a = ps->a->next;
            ps->x++;
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
            ft_putstr_fd("rb\n", 1);
            ps->b = ps->b->next;
            ps->x++;
        }
    }
    else
    {
        while (ps->b->data != min)
        {
            ft_putstr_fd("rrb\n", 1);
            ps->b = ps->b->prev;
            ps->x++;
        }
    }
    push_a(ps);
    ft_putstr_fd("pa\n", 1);
    ps->x++;
    ps->a = ps->a->next;
    ft_putstr_fd("ra\n", 1);
    ps->x++;
}