# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 09:46:52 by rcabezas          #+#    #+#              #
#    Updated: 2021/03/29 16:50:02 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker

CC		= gcc
CFLAGS = -Werror -Wextra -Wall -g3 -fsanitize=address

SRCS_CH = checker.c read_line.c check_order.c

CH_SRCS = $(addprefix srcs/checker/, $(SRCS_CH))

OBJS_CH = $(CH_SRCS:.c=.o)

SRCS_SHARED = init_stacks.c ops.c print_stack.c check_args.c \
			dcll_functions_1.c dcll_functions_2.c

SHARED_SRCS = $(addprefix srcs/shared/, $(SRCS_SHARED))

OBJS_SHARED = $(SHARED_SRCS:.c=.o)

INCLUDES = includes

RM = rm -rf

LIBFT = libft

$(CHECKER) : $(OBJS_CH) $(OBJS_SHARED)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(LIBFT)/libft.a $(OBJS_CH) $(OBJS_SHARED) -o $(CHECKER)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<

all : $(CHECKER)

clean :
	@$(RM) $(OBJS_CH) $(OBJS_SHARED)
	@make clean -C $(LIBFT)

fclean : clean
	@$(RM) $(CHECKER)
	@make fclean -C $(LIBFT)

re:				fclean all

.PHONY: 		all fclean clean re