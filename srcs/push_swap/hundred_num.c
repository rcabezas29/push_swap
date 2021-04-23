/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 08:32:12 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/23 09:22:16 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_hundred(t_push_swap *ps)
{
	if (checking_order(ps))
		return ;
	ps->med_low = (get_media(ps) + ps->min) / 2;
	ps->med_high = (get_media(ps) + ps->max) / 2;
	push_b_to_order(ps, ps->min, ps->med_low);
	push_b_to_order(ps, ps->med_low, get_media(ps));
	push_b_to_order(ps, get_media(ps), ps->med_high);
	push_b_to_order(ps, ps->med_high, ps->max);
}
