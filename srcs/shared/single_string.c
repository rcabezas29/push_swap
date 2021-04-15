/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:08:02 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/15 20:27:00 by rcabezas         ###   ########.fr       */
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
	aux = malloc(sizeof(char *) * (n + 1));
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

void	free_double_ptr(char **s)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}