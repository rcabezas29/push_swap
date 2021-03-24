# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 09:46:52 by rcabezas          #+#    #+#              #
#    Updated: 2021/03/24 16:47:38 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker

CC		= gcc
CFLAGS = -Werror -Wextra -Wall

SRCS_CH = checker.c read_line.c check_order.c

CH_SRCS = $(addprefix srcs/checker/, $(SRCS_CH))

OBJS_CH = $(CH_SRCS:.c=.o)

SRCS_SHARED = init_stacks.c ops.c print_stack.c

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