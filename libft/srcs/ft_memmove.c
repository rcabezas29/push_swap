/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:19:51 by rcabezas          #+#    #+#             */
/*   Updated: 2019/11/26 18:03:53 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	i = 0;
	if ((int)p == '\0' && (int)q == '\0')
		return (dst);
	else
	{
		if (q < p)
		{
			while (++i <= len)
				p[len - i] = q[len - i];
		}
		else
		{
			while (len--)
				*p++ = *q++;
		}
		return (dst);
	}
}
