/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   media.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:13:03 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/05 16:41:03 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	get_media(t_push_swap *ps)
{
	t_stack	*aux;
	int		x;

	x = 0;
	aux = ps->a;
	while (aux->next != ps->a)
	{
		x += aux->data;
		aux = aux->next;
	}
	x += aux->data;
	x /= ps->n;
	return (x);
}
