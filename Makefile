# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 16:57:12 by eddos-sa          #+#    #+#              #
#    Updated: 2023/09/01 17:06:22 by eddos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ftprintf.c \ putchar.c \ puthex.c \ putint.c \ putptr.c \ putstr.c \ putuns.c

OBJS = ${SRCS:.c=o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
rm = rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re