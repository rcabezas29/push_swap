/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:08:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/16 21:23:08 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	**single_string(t_push_swap *ps, char **argv)
{
	int		i;
	int		j;
	char	**aux;
	char	**split;

	aux = NULL;
	split = ft_split(argv[1], ' ');
	ps->n = count_bidimensional_array(split);
	if (ps->n == 1)
		return (argv);
	ps->is_string = 1;
	aux = ft_calloc(sizeof(char *), (ps->n + 2));
	aux[0] = ft_strdup(argv[0]);
	i = 1;
	j = 0;
	while (split[j])
	{
		aux[i] = ft_strdup(split[j]);
		j++;
		i++;
	}
	free_double_ptr(split);
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

void	free_double_ptr(char **s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		free(s[i]);
		i++;
	}
	free(s);
}
