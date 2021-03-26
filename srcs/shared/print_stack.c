/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:00:09 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 09:35:44 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    print_stack_a(t_push_swap *ps)
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = ps->a;
	stack_b = ps->b;
	while(ps->a || ps->b)
	{
		printf("%i %i\n", stack_a->data, stack_b->data);
		ps->a = stack_a->next;
	}
	printf("- -\na b\n");
}