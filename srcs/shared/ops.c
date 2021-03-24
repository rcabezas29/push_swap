/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:59:16 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/24 16:40:44 by rcabezas         ###   ########.fr       */
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

int	 *push(int *stack_1, int *stack_2, int nargs)
{
	int *aux;
	int i;
	int j;

	if (stack_2[0] == 0)
		return (stack_1);
	aux = ft_calloc(nargs, sizeof(int));
	aux[0] = stack_2[0];
	stack_2[0] = 0;
	i = 0;
	j = 1;
	while (j <= nargs)
		aux[j++] = stack_1[i++];
	align(stack_2, nargs);
	return (aux);
}

void	rotate(int *stack, int nargs)
{
	int aux;

	aux = stack[0];
	stack[0] = '\0';
	align(stack, nargs);
	stack[nargs - 1] = aux;
}

void	reverse_rotate(int *stack, int nargs)
{
	int i;

	i = 0;
	while(i++ < nargs - 1)
		rotate(stack, nargs);
}

void	align(int *stack, int nargs)
{
	int i;

	i = 0;
	while (i < nargs - 1)
	{
		if (stack[i] == 0)
		{
			stack[i] = stack[i + 1];
			stack[i + 1] = 0;
		}
		i++;
	}
}