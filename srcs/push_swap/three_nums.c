/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:28:38 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/30 13:54:33 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    three_sort(t_push_swap *ps)
{
    while (!check_order_three(ps))
    {
        if (ps->a->data < ps->a->next->data && ps->a->data > ps->a->prev->data)
        {
            ft_putstr_fd("rra\n", 0);
            ps->a = ps->a->prev;
        }
        else if (ps->a->data > ps->a->next->data && ps->a->prev->data < ps->a->data)
        {
            ft_putstr_fd("ra\n", 0);
            ps->a = ps->a->next;
        }
        else
        {
            ft_putstr_fd("sa\n", 0);
            swap(ps->a);
            ps->a = ps->a->prev;
            if (check_order_three(ps) == 1)
                return ;
            if (ps->a->data < ps->a->next->data)
            {
                ft_putstr_fd("rra\n", 0);
                ps->a = ps->a->prev;
            }
            else
            {
                ft_putstr_fd("ra\n", 0);
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
    while (i < ps->n - 1)
    {
        fol = ori->next;
        if (ori->data > fol->data)
            return (0);
        ori = ori->next;
        i++;
    }
    return (1);
}