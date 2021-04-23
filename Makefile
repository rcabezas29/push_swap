# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 09:46:52 by rcabezas          #+#    #+#              #
#    Updated: 2021/04/23 08:37:00 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP = push_swap

CHECKER = checker

CC		= gcc
CFLAGS = -Werror -Wextra -Wall

SRCS_CH = checker.c read_line.c

SRCS_PS = three_nums.c push_swap.c media.c five_nums.c \
			check_max_min.c a_lot_num.c hundred_num.c

CH_SRCS = $(addprefix srcs/checker/, $(SRCS_CH))

PS_SRCS = $(addprefix srcs/push_swap/, $(SRCS_PS))

OBJS_CH = $(CH_SRCS:.c=.o)

OBJS_PS = $(PS_SRCS:.c=.o)

SRCS_SHARED = init_stacks.c ops.c print_stack.c check_args.c \
			dcll_functions.c check_order.c \
			single_string.c

SHARED_SRCS = $(addprefix srcs/shared/, $(SRCS_SHARED))

OBJS_SHARED = $(SHARED_SRCS:.c=.o)

INCLUDES = includes

RM = rm -rf

LIBFT = libft

all : $(CHECKER) $(PUSH_SWAP)

$(CHECKER) : $(OBJS_CH) $(OBJS_SHARED)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(LIBFT)/libft.a $(OBJS_CH) $(OBJS_SHARED) -o $(CHECKER)

$(PUSH_SWAP) : $(OBJS_PS) $(OBJS_SHARED)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(LIBFT)/libft.a $(OBJS_PS) $(OBJS_SHARED) -o $(PUSH_SWAP)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<


clean :
	@$(RM) $(OBJS_CH) $(OBJS_PS) $(OBJS_SHARED)
	@make clean -C $(LIBFT)

fclean : clean
	@$(RM) $(CHECKER) $(PUSH_SWAP)
	@make fclean -C $(LIBFT)

re:				fclean all

.PHONY: 		all fclean clean re