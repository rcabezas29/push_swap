/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:00:13 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 12:27:47 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack    *init_stack_a(t_push_swap *ps, char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (!ps->a)
			ps->a = ft_dcllnew(ft_atoi(argv[i]));
		ft_dcll_addback(ps->a, ft_create_node(argv[i]));
		i++;
	}
}