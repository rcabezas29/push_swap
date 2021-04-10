/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:08:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/10 14:09:44 by rcabezas         ###   ########.fr       */
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
	n = count_bidimensional_array(argv);
	if (n == 1)
		return (argv);
	split = ft_split(argv[1], ' ');
	ps->is_string = 1;
	aux = mem_double_ptr(aux, n);
	aux[0] = argv[0];
	i = 1;
	j = 0;
	while (split[j])
	{
		aux[i] = split[j];
		j++;
		i++;
	}
	return (aux);
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

char	**mem_double_ptr(char **s, int n)
{
	int i;

	s = (char **)malloc(sizeof(char **));
	i = 0;
	while (i <= n)
	{
		s[i] = (char *)malloc(sizeof(char));
		i++;
	}
	return (s);
}