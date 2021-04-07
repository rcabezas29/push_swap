/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:37:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/07 15:51:00 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;

	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	check_args(argv);
	ps = malloc(sizeof(t_push_swap));
	ft_bzero(ps, sizeof(t_push_swap));
	ps->n = argc - 1;
	init_stack_a(ps, argv);
	ps->max = check_maximum(ps->a);
	ps->min = check_minimum(ps->a);
	if (ps->n <= 3)
		three_sort(ps);
	else if (3 < ps->n && ps->n <= 5)
		five_sort(ps);
	else if (5 < ps->n && ps->n <= 100)
		sort_hundred(ps);
	//print_stack_a(ps);
	//printf("Lineas: %i\n", ps->x);
	//system("leaks push_swap");
	return (0);
}
