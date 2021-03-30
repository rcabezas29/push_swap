/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:37:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/30 13:10:54 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap *ps;

	check_args(argv);
	ps = malloc(sizeof(t_push_swap));
	ft_bzero(ps, sizeof(t_push_swap));
	ps->n = argc - 1;
	if (argc <= 1)
    {
		printf("ERROR\nIncorrect number of arguments");
		return (0);
	}
	init_stack_a(ps, argv);
	if (ps->n <= 3)
		three_sort(ps);
	else if (3 < ps->n && ps->n <= 5)
		five_sort(ps);
	return (0);
}