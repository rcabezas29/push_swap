/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:00:09 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/05 17:13:49 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_stack_a(t_push_swap *ps)
{
	t_stack	*stack_a;

	if (!ps->a)
	{
		print_stack_b(ps);
		return ;
	}
	stack_a = ps->a;
	while (stack_a->next != ps->a)
	{
		printf("%i\n", stack_a->data);
		stack_a = stack_a->next;
	}
	printf("%i\n", stack_a->data);
	printf("-\na\n");
	if (ps->b)
		print_stack_b(ps);
}

void	print_stack_b(t_push_swap *ps)
{
	t_stack	*stack_b;

	stack_b = ps->b;
	printf("\n\n\n");
	while (stack_b->next != ps->b)
	{
		printf("%i\n", stack_b->data);
		stack_b = stack_b->next;
	}
	printf("%i\n", stack_b->data);
	printf("-\nb\n");
}
