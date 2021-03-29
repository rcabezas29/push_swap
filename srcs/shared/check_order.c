/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:46:30 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/29 17:30:35 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int    check_order(t_push_swap *ps)
{
    int i;
    t_stack *ori;
    t_stack *fol;

    i = 0;
    ori = (t_stack *)ps->a;
    while (i < ps->n - 1)
    {
        fol = (t_stack *)ori->next;
        if (ori->data > fol->data || ps->b != NULL)
        {
            printf("KO");
            return (0);
        }
        ori = (t_stack *)ori->next;
        i++;
    }
    printf("OK!");
    return (1);
}