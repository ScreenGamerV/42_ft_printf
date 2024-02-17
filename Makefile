# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:00:01 by vtoroyan          #+#    #+#              #
#    Updated: 2024/02/17 17:00:03 by vtoroyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_checkargs.c ft_paramcount.c

LIBFT = libft
OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
HEADER = libftprintf.c

CFLAGS += -I$(LIBFT)

all: $(NAME)

$(NAME): $(OBJS)
		make -C $(LIBFT)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)
		make clean -C $(LIBFT)

fclean: clean
		$(RM) $(NAME)
		$(RM) $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re