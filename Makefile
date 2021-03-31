# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 09:46:52 by rcabezas          #+#    #+#              #
#    Updated: 2021/03/31 09:02:34 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker

PUSH_SWAP = push_swap

CC		= gcc
CFLAGS = -Werror -Wextra -Wall -g3 -fsanitize=address

SRCS_CH = checker.c read_line.c

SRCS_PS = three_nums.c push_swap.c media.c five_nums.c \
			check_max_min.c

CH_SRCS = $(addprefix srcs/checker/, $(SRCS_CH))

PS_SRCS = $(addprefix srcs/push_swap/, $(SRCS_PS))

OBJS_CH = $(CH_SRCS:.c=.o)

OBJS_PS = $(PS_SRCS:.c=.o)

SRCS_SHARED = init_stacks.c ops.c print_stack.c check_args.c \
			dcll_functions_1.c dcll_functions_2.c check_order.c

SHARED_SRCS = $(addprefix srcs/shared/, $(SRCS_SHARED))

OBJS_SHARED = $(SHARED_SRCS:.c=.o)

INCLUDES = includes

RM = rm -rf

LIBFT = libft

$(CHECKER) : $(OBJS_CH) $(OBJS_SHARED)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(LIBFT)/libft.a $(OBJS_CH) $(OBJS_SHARED) -o $(CHECKER)

$(PUSH_SWAP) : $(OBJS_PS) $(OBJS_SHARED) $(OBJS_CH)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(LIBFT)/libft.a $(OBJS_PS) $(OBJS_SHARED) -o $(PUSH_SWAP)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<

all : $(CHECKER) $(PUSH_SWAP)

clean :
	@$(RM) $(OBJS_CH) $(OBJS_PS) $(OBJS_SHARED)
	@make clean -C $(LIBFT)

fclean : clean
	@$(RM) $(CHECKER) $(PUSH_SWAP)
	@make fclean -C $(LIBFT)

re:				fclean all

.PHONY: 		all fclean clean re