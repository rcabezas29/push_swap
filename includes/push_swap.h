/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:02:14 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/24 16:39:39 by rcabezas         ###   ########.fr       */
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
    int n;
}               t_push_swap;

int *init_stack_a(t_push_swap *ps, int *a, char **argv);

void    read_line(t_push_swap *ps);

void	swap(int *stack);
int	    *push(int *stack_1, int *stack_2, int nargs);
void	rotate(int *stack, int nargs);
void	reverse_rotate(int *stack, int nargs);
void	align(int *stack, int nargs);

void    print_stack_a(t_push_swap *ps);
#endif
