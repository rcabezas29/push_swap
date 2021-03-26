/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:59:16 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 15:42:15 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap(t_stack *stack)
{
	t_stack *aux;

    aux = (t_stack *)stack->next;
    ft_dcll_delone(aux);
    ft_dcll_addfront(stack, ft_create_node(aux->data));
}

void	push(t_stack *stack_1, t_stack *stack_2)
{
	if (stack_2 == NULL)
        return ;
    ft_dcll_addfront(stack_1, stack_2);
    ft_dcll_delfirst(stack_2);
}

void	rotate(t_stack *stack)
{
	t_stack *aux;
    
    aux = ft_create_node(stack->data);
    ft_dcll_delfirst(stack);
    ft_dcll_addback(stack, aux);
}

void	reverse_rotate(t_stack *stack)
{
	t_stack *aux;

    aux = (t_stack *)stack->prev;
    ft_dcll_delback(stack);
    ft_dcll_addfront(stack, aux);
}