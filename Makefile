# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 09:46:52 by rcabezas          #+#    #+#              #
#    Updated: 2021/03/17 15:29:34 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP = push_swap

CHECKER = checker

CFLAGS = -Wall -Wextra -Werror

CH_FILES = checker.c

SHARED_FILES = init_stacks.c

PS_FILES = 

SRCS_CH = $(addprefix srcs/checker/, $(CH_FILES))

SRCS_PS = $(addprefix srcs/push_swap/, $(PS_FILES))

SRCS_SHARED = $(addprefix srcs/shared/, $(SHARED_FILES))

OBJS_CH = $(SRCS_CH:.c=.o)

OBJS_PS = $(SRCS_PS:.c=.o)

OBJS_SHARED = $(SRCS_SHARED:.c=.o)

RM = rm -rf

all: $(CHECKER)

$(PUSH_SWAP) : $(OBJS_PS)
	@make -C $(LIBFT)
	@$(CFLAGS) includes/push_swap.h libft/libft.a $(OBJS_PS) -o $(PUSH_SWAP)

$(CHECKER) : $(OBJS_CH)
	@make -C $(LIBFT)
	@$(CFLAGS) includes/push_swap.h libft/libft.a $(OBJS_CH) -o $(CHECKER)

clean:
	@$(RM) $(OBJS_CH) $(OBJS_PS) $(OBJS_SHARED)
	@make clean -C libft

fclean:			clean
	@$(RM) $(PUSH_SWAP) $(CHECKER)
	@make fclean -C $(LIBFT)

re:				fclean all

.PHONY: 		all fclean clean re