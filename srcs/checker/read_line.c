/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:40:46 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/23 13:10:43 by rcabezas         ###   ########.fr       */
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
    if (ft_strcmp(ps->line[0], "pa") == 0)
    {
        push(ps->a, ps->b, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "pb") == 0)
    {
        push(ps->b, ps->a, ps->n);
        print_stack_a(ps);
    }
    if (ft_strcmp(ps->line[0], "ra") == 0)
    {
        rotate(ps->a, ps->n);
        print_stack_a(ps);
    }
}