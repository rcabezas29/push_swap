/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:02:14 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/05 15:43:00 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_push_swap
{
	t_stack		*a;
	t_stack		*b;
	int			n;
	char		*line;
	int			max;
	int			min;
	int			x;
}	t_push_swap;

void	init_stack_a(t_push_swap *ps, char **argv);

void	read_line(t_push_swap *ps);

void	swap(t_stack *stack);
void	push_a(t_push_swap *ps);
void	push_b(t_push_swap *ps);

void	print_stack_a(t_push_swap *ps);
void	print_stack_b(t_push_swap *ps);

int		check_order(t_push_swap *ps);

void	check_args(char **args);

t_stack	*ft_dcllnew(int n);
void	ft_dcll_addfront(t_stack *s, t_stack *new);
int		ft_dcll_size(t_stack *s);
t_stack	*ft_dcll_last(t_stack *s);
void	ft_dcll_addback(t_stack *s, t_stack *new);
void	ft_dcll_delback(t_stack *s);
void	ft_dcll_delfirst(t_stack *s);
void	ft_dcll_clear(t_stack *s);
t_stack	*ft_create_node(int n);
void	ft_dcll_delone(t_stack *node);

void	three_sort(t_push_swap *ps);
int		check_order_three(t_push_swap *ps);

void	five_sort(t_push_swap *ps);
int		check_order_five(t_push_swap *ps);
void	insertion(t_push_swap *ps);

int		get_media(t_push_swap *ps);

int		check_maximum(t_stack *s);
int		check_minimum(t_stack *s);

void	sort_hundred(t_push_swap *ps);
void	order_b(t_push_swap *ps);
#endif
