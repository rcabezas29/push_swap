/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:58:53 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/07 15:45:27 by rcabezas         ###   ########.fr       */
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
			j++;
		}
		k = i + 1;
		while (args[k])
		{
			if (!ft_strcmp(args[i], args[k]))
			{
				printf("Error\n");
				exit (EXIT_SUCCESS);
			}
			k++;
		}
		i++;
	}
}
