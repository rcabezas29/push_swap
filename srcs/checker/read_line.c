/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:40:46 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/24 17:59:30 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    read_line(t_push_swap *ps)
{
    if (ft_strcmp(ps->line[0], "sa") == 0)
    {
        swap(ps->a);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "sb") == 0)
    {
        swap(ps->b);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "ss") == 0)
    {
        swap(ps->a);
        swap(ps->b);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "pa") == 0)
    {
        ps->a = push(ps->a, ps->b, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "pb") == 0)
    {
        ps-> b = push(ps->b, ps->a, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "ra") == 0)
    {
        rotate(ps->a, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "rb") == 0)
    {
        rotate(ps->b, ps->n);
        print_stack_a(ps);
    }
     if (ft_strcmp(ps->line[0], "rr") == 0)
    {
        rotate(ps->a, ps->n);
        rotate(ps->b, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "rra") == 0)
    {
        reverse_rotate(ps->a, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "rrb") == 0)
    {
        reverse_rotate(ps->b, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "rrr") == 0)
    {
        reverse_rotate(ps->a, ps->n);
        reverse_rotate(ps->b, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "ch") == 0)
    {
        check_order(ps);
        printf("\n");
    }
}