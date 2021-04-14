/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:08:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/14 11:30:19 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	**single_string(t_push_swap *ps, char **argv)
{
	int		n;
	int		i;
	int		j;
	char	**aux;
	char	**split;

	aux = NULL;
	split = ft_split(argv[1], ' ');
	n = count_bidimensional_array(split);
	ps->n = n;
	if (n == 1)
		return (argv);
	ps->is_string = 1;
	aux = mem_double_ptr(n);
	aux[0] = argv[0];
	i = 1;
	j = 0;
	while (split[j])
	{
		aux[i] = split[j];
		j++;
		i++;
	}
	aux[i] = NULL;
	return (aux);
}

int	count_bidimensional_array(char **s)
{
	int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char	**mem_double_ptr(int n)
{
	int		i;
	char	**s;

	s = ft_calloc(sizeof(char *), (n + 1));
	i = 0;
	while (i <= n)
	{
		s[i] = malloc(sizeof(char));
		i++;
	}
	return (s);
}
