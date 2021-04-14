/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:40:46 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/14 11:24:12 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	read_line(t_push_swap *ps)
{
	if (ft_strcmp(ps->line, "sa") == 0)
	{
		swap(ps->a);
		ps->a = ps->a->prev;
	}
	else if (ft_strcmp(ps->line, "sb") == 0)
	{
		swap(ps->b);
		ps->b = ps->b->prev;
	}
	else if (ft_strcmp(ps->line, "ss") == 0)
	{
		swap(ps->a);
		swap(ps->b);
		ps->a = ps->a->prev;
		ps->b = ps->b->prev;
	}
	else if (ft_strcmp(ps->line, "pa") == 0)
		push_a(ps);
	else if (ft_strcmp(ps->line, "pb") == 0)
		push_b(ps);
	else
		read_line_more(ps);
}

void	read_line_more(t_push_swap *ps)
{
	if (ft_strcmp(ps->line, "ra") == 0)
		ps->a = ps->a->next;
	else if (ft_strcmp(ps->line, "rb") == 0)
		ps->b = ps->b->next;
	else if (ft_strcmp(ps->line, "rr") == 0)
	{
		ps->a = ps->a->next;
		ps->b = ps->b->next;
	}
	else if (ft_strcmp(ps->line, "rra") == 0)
		ps->a = ps->a->prev;
	else if (ft_strcmp(ps->line, "rrb") == 0)
		ps->b = ps->b->prev;
	else if (ft_strcmp(ps->line, "rrr") == 0)
	{
		ps->a = ps->a->prev;
		ps->b = ps->b->prev;
	}
	else
	{
		printf("Error\n");
		exit (EXIT_SUCCESS);
	}
}
