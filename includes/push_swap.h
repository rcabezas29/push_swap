/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:02:14 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/18 13:09:37 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

typedef struct s_push_swap
{
    int	*a;
    int *b;
    char **line;
}               t_push_swap;

void    init_stack_a(t_push_swap *ps, char **argv);

void    read_line(t_push_swap *ps);

void	swap(int *stack);
void	push(int *stack_1, int *stack_2);
#endif
