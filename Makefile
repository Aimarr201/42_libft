# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/19 17:44:15 by amendibi          #+#    #+#              #
#    Updated: 2026/01/19 18:50:46 by amendibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g3 -I.

SRCS = ft_atoi.c

OBJS = $(SRCS:.c=.o)

HEADERS = libft.h

all: $(NAME)

$(NAME): &(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re