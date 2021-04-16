/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:36:41 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/16 09:38:31 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;
	int			i;

	ps = malloc(sizeof(t_push_swap));
	ft_bzero(ps, sizeof(t_push_swap));
	ps->n = argc - 1;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	i = 0;
	if (argc == 2)
		ps->argstr = single_string(ps, argv);
	else
		ps->argstr = argv;
	check_args(ps->argstr);
	init_stack_a(ps, ps->argstr);
	read_instructions(ps);
	check_order(ps);
	return (0);
}

void	read_instructions(t_push_swap *ps)
{
	while (get_next_line(0, &ps->line) > 0)
	{
		if (!ft_strcmp(ps->line, ""))
			break ;
		read_line(ps);
		free(ps->line);
	}
}
