/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:59:16 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/22 12:27:33 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap(int *stack)
{
	int aux;

	aux = stack[0];
	stack[0] = stack[1];
	stack[1] = aux;
}

void	push(int *stack_1, int *stack_2, int nargs)
{
	int *aux;
	int i;
	int j;

	if (stack_2[0] == '\0')
		return ;
	aux = malloc(nargs);
	aux[0] = stack_2[0];
	stack_2[0] = '\0';
	i = 0;
	j = 1;
	while (j <= nargs)
		aux[j++] = stack_1[i++];
	stack_1 = aux;
	align(stack_2, nargs);
}

void	rotate(int *stack, int nargs)
{
	int aux;

	aux = stack[0];
	stack[0] = '\0';
	align(stack, nargs);
	stack[nargs] = aux;
}

void	reverse_rotate(int *stack)
{
	int i;

	i = 0;
	while(stack[i] != '\0')
		i++;
	
}

void	align(int *stack, int nargs)
{
	int i;

	i = 0;
	while (i <= nargs)
	{
		if (stack[i] == '\0')
		{
			stack[i] = stack[i + 1];
			stack[i + 1] = '\0';
		}
		i++;
	}
}