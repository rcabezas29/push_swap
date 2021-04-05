/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/05 14:54:50 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    three_sort(t_push_swap *ps)
{
    if (!check_order_three(ps))
    {
        if (ps->a->data > ps->a->next->data)
        {
            if (ps->a->next->data > ps->a->prev->data)
            {
                ft_putstr_fd("sa\n", 1);
                swap(ps->a);
                ps->a = ps->a->prev;
                ft_putstr_fd("rra\n", 1);
                ps->a = ps->a->prev;
            }
            else
            {
                if (ps->a->prev->data > ps->a->data)
                {
                    ft_putstr_fd("sa\n", 1);
                    swap(ps->a);
                    ps->a = ps->a->prev;
                }
                else
                {
                    ft_putstr_fd("ra\n", 1);
                ps->a = ps->a->next;
                }
            }
        }
        else
        {
            if(ps->a->data > ps->a->prev->data)
            {
                ft_putstr_fd("rra\n", 1);
                ps->a = ps->a->prev;
            }
            else
            {
                ft_putstr_fd("sa\n", 1);
                swap(ps->a);
                ps->a = ps->a->prev;
                ft_putstr_fd("ra\n", 1);
                ps->a = ps->a->next;
            }
        }
    }
}

int     check_order_three(t_push_swap *ps)
{
    int i;
    t_stack *ori;
    t_stack *fol;

    i = 0;
    ori = ps->a;
    while (i < 2)
    {
        fol = ori->next;
        if (ori->data > fol->data)
            return (0);
        ori = ori->next;
        i++;
    }
    return (1);
}