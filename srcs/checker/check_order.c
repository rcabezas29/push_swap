/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:46:30 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/24 17:58:03 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    check_order(t_push_swap *ps)
{
    int i;

    i = 0;
    while (i < ps->n - 3)
    {
        if (ps->a[i] > ps->a[i + 1])
        {
            printf("KO");
            return ;
        }
        i++;
    }
    printf("OK!");
    exit(EXIT_SUCCESS);
}