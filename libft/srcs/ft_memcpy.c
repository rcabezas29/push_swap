/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:47:29 by rcabezas          #+#    #+#             */
/*   Updated: 2019/11/13 18:46:35 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p;
	const char	*q;

	p = dst;
	q = src;
	if ((int)p == '\0' && (int)q == '\0')
		return (dst);
	else
	{
		while (n--)
			*p++ = *q++;
		return (dst);
	}
}
