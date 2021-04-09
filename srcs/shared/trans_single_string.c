/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans_single_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:08:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/09 09:52:43 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	**single_string(t_push_swap *ps, char **argv)
{
    char	**aux;
	char	**ret;
	int		i;
	int		j;
	int		n;

	ps = NULL;
    aux = ft_split(argv[1], ' ');
	n = count_bidimensional_array(aux);
	ret = malloc(sizeof(char *) * (n + 2));
	ret[0] = argv[0];
	i = 0;
	j = 1;
	while (aux[i])
	{
		ret[j] = aux[i];
		i++;
		j++;
	}
    return (ret);
}

int		count_bidimensional_array(char **s)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (s[i++])
		n++;
	return (n);
}
