/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:00:13 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/16 12:06:42 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	init_stack_a(t_push_swap *ps, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!ps->a)
			ps->a = ft_dcllnew(ft_atoi(argv[i]));
		else
			ft_dcll_addback(ps->a, ft_create_node(ft_atoi(argv[i])));
		i++;
	}
}

t_stack	*ft_create_node(int n)
{
	t_stack	*s;

	s = malloc(sizeof(t_stack));
	s->data = n;
	return (s);
}
