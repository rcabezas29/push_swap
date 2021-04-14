/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:37:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/13 16:26:33 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;

	ps = malloc(sizeof(t_push_swap));
	ft_bzero(ps, sizeof(t_push_swap));
	ps->n = argc - 1;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	if (argc == 2)
		ps->argstr = single_string(ps, argv);
	else
		ps->argstr = argv;
	check_args(ps->argstr);
	init_stack_a(ps, ps->argstr);
	ps->max = check_maximum(ps->a);
	ps->min = check_minimum(ps->a);
	if (ps->n <= 3)
		three_sort(ps);
	else if (3 < ps->n && ps->n <= 5)
		five_sort(ps);
	else if (5 < ps->n && ps->n <= 100)
		sort_hundred(ps);
	else
		sort_a_lot(ps);
	//print_stack_a(ps);
	//printf("Lineas: %i\n", ps->x);
	//system("leaks push_swap");
	return (0);
}
