/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:00:09 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 16:11:45 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    print_stack_a(t_push_swap *ps)
{
	t_stack *stack_a;

	stack_a = ps->a;
	while(stack_a->next != (struct t_stack *)ps->a)
	{
		printf("%i\n", stack_a->data);
		stack_a = (t_stack *)stack_a->next;
	}
	printf("- -\na b\n");
}