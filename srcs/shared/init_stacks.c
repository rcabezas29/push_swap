/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:00:13 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/17 14:04:49 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    init_stack_a(t_push_swap *ps, char **argv)
{
    int i;
	int j;
	
	i = 1;
	j = 0;
	while (argv)
	{
		ps->a[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
}