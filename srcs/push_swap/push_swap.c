/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:37:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/27 09:26:39 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;

	ps = ft_calloc(13, sizeof(t_push_swap));
	ps->n = argc - 1;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	ps->argstr = argv;
	if (argc == 2)
		ps->argstr = single_string(ps, argv);
	check_args(ps->argstr);
	init_stack_a(ps, ps->argstr);
	if (ps->n <= 3)
		three_sort(ps);
	else if (3 < ps->n && ps->n <= 5)
		five_sort(ps);
	else if (ps->n > 5 && ps->n < 151)
		sort_hundred(ps);
	else if (ps->n > 150)
		sort_a_lot(ps);
	if (ps->is_string == 1)
		free_double_ptr(ps->argstr);
	return (0);
}
