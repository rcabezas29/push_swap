/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:18:44 by rcabezas          #+#    #+#             */
/*   Updated: 2019/11/13 19:47:58 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ch;
	char			*p;

	i = 0;
	p = (char *)str;
	ch = c + '\0';
	while (p[i] != '\0')
	{
		if (p[i] == ch)
			return (p + i);
		i++;
	}
	if (ch == '\0')
		return (p + i);
	return (0);
}
