/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:58:53 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/15 18:49:59 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	check_args(char **args)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			check_int(args, i, j);
			j++;
		}
		k = i + 1;
		while (args[k])
		{
			check_repeat(args[i], args[k]);
			k++;
		}
		i++;
	}
}

void	check_int(char **args, int i, int j)
{
	if (!ft_isdigit(args[i][j]) && args[i][j] != '-')
	{
		printf("Error\n");
		exit (EXIT_SUCCESS);
	}
	if (ft_strlen(args[i]) > 9)
	{
		printf("Error\n");
		exit (EXIT_SUCCESS);
	}
}

void	check_repeat(char *s1, char *s2)
{
	if (!ft_strcmp(s1, s2))
	{
		printf("Error\n");
		exit (EXIT_SUCCESS);
	}
}
