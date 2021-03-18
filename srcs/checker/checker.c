/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:36:41 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/18 12:14:38 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;
	
	ps = malloc(sizeof(t_push_swap));
	ft_bzero(ps, sizeof(t_push_swap));
	if (argc <= 1)
    {
		printf("ERROR\nIncorrect number of arguments");
		return (0);
	}
	init_stack_a(ps, argv);
	ps->b = malloc(argc);
	return (0);
}