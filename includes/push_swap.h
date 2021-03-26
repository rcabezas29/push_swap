/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:02:14 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 12:46:01 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

typedef struct s_stack
{
    int data;
    t_stack *next;
    t_stack *prev;
}               t_stack;


typedef struct s_push_swap
{
    t_stack *a;
    int *b;
    int n;
    char *line;
}               t_push_swap;

t_stack *init_stack_a(t_push_swap *ps, char **argv);

void    read_line(t_push_swap *ps);

void	swap(t_stack *stack);
void    push(t_stack *stack_1, t_stack *stack_2);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);

void    print_stack_a(t_push_swap *ps);

void    check_order(t_push_swap *ps);

void    check_args(char **args);

t_stack *ft_dcllnew(int n);
void	ft_dcll_addfront(t_stack *s, t_stack *new);
int	ft_dcll_size(t_stack *s);
t_stack	*ft_dcll_last(t_stack *s);
void	ft_dcll_addback(t_stack *s, t_stack *new);
void	ft_dcll_delback(t_stack *s);
void	ft_dcll_delfirst(t_stack *s);
void	ft_dcll_clear(t_stack *s);
t_stack *ft_create_node(int n);
t_stack *ft_dcll_delone(t_stack *s);
#endif
