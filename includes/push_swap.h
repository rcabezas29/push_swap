/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:02:14 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/23 08:47:22 by rcabezas         ###   ########.fr       */
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
	int			is_string;
	char		**argstr;
	int			med_min_low;
	int			med_low;
	int			med_low_media;
	int			med_media_high;
	int			med_high;
	int			med_high_max;
}	t_push_swap;

t_stack	*ft_create_node(int n);
void	init_stack_a(t_push_swap *ps, char **argv);

void	read_instructions(t_push_swap *ps);

void	read_line(t_push_swap *ps);
void	read_line_more(t_push_swap *ps);

void	swap(t_stack *stack);
void	push_a(t_push_swap *ps);
void	push_b(t_push_swap *ps);
void	help_push_b(t_push_swap *ps, t_stack *tmp);
void	help_push_a(t_push_swap *ps, t_stack *tmp);

void	print_stack_a(t_push_swap *ps);
void	print_stack_b(t_push_swap *ps);

int		check_order(t_push_swap *ps);
int		checking_order(t_push_swap *ps);
int		checking_order_three(t_push_swap *ps);

void	check_args(char **args);
void	check_int(char **args, int i, int j);
void	check_repeat(char *s1, char *s2);

t_stack	*ft_dcllnew(int n);
void	ft_dcll_addfront(t_stack *s, t_stack *new);
int		ft_dcll_size(t_stack *s);
void	ft_dcll_addback(t_stack *s, t_stack *new);
void	ft_dcll_delone(t_stack *node);

void	three_sort(t_push_swap *ps);
void	ordering(t_push_swap *ps);

void	five_sort(t_push_swap *ps);
void	insertion(t_push_swap *ps);
void	find_num_in_five(t_push_swap *ps);

int		get_media(t_push_swap *ps);

int		check_maximum(t_stack *s);
int		check_minimum(t_stack *s);
int		minimum_inpush(t_push_swap *ps, int media);

void	order_b(t_push_swap *ps);
void	sort_a_lot(t_push_swap *ps);
void	push_b_to_order(t_push_swap *ps, int low, int high);
void	go_to_min(t_push_swap *ps, int pos, int n);

void	sort_hundred(t_push_swap *ps);

char	**single_string(t_push_swap *ps, char **argv);
int		count_bidimensional_array(char **s);
void	free_double_ptr(char **s);
char	**init_aux(t_push_swap *ps, char **aux, char *prog);
#endif
