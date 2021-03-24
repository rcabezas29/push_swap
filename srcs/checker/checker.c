/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:36:41 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/24 13:41:08 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;
	int *a;
	int *b;

	ps = malloc(sizeof(t_push_swap));
	a = ft_calloc(argc - 1, sizeof(int));
	b = ft_calloc(argc - 1, sizeof(int));
	ps->n = argc - 1;
	if (argc <= 1)
    {
		printf("ERROR\nIncorrect number of arguments");
		return (0);
	}
	ps->a = init_stack_a(ps, a, argv);
	ps->b = b;
	print_stack_a(ps);
	while (get_next_line(1, ps->line) > 0)
		read_line(ps);
	return (0);
}