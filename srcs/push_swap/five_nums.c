/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:09:09 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/30 16:08:22 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    five_sort(t_push_swap *ps)
{
    int n;

    if (check_order_five(ps))
        return ;
    n = ps->n - 3;
    while (n-- > 0)
    {
        ft_putstr_fd("pb\n", 0);
        push_b(ps);
    }
    three_sort(ps);
    //print_stack_a(ps); 
    while ((ps->a->data < ps->b->data && ps->a->next->data < ps->b->data) ||
        (ps->a->data > ps->b->data && ps->a->next->data > ps->b->data))
    {
        ft_putstr_fd("ra\n", 0);
        ps->a = ps->a->prev;
    }
    ft_putstr_fd("pa\n", 0);
    push_a(ps);
    while (!check_order_five(ps))
    {
        ft_putstr_fd("ra\n", 0);
        ps->a = ps->a->next;
    }
    //print_stack_a(ps);
}

int     check_order_five(t_push_swap *ps)
{
    int i;
    t_stack *ori;
    t_stack *fol;

    i = 0;
    ori = ps->a;
    while (i < ps->n - 1)
    {
        fol = ori->next;
        if (ori->data > fol->data || ps->b != NULL)
            return (0);
        ori = ori->next;
        i++;
    }
    return (1);
}