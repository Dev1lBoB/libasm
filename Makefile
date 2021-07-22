# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/24 20:09:25 by wpersimm          #+#    #+#              #
#    Updated: 2021/03/28 04:14:30 by wpersimm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a

SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

SRCB	= ft_list_size.s ft_list_push_front.s

OBJS	= ${SRCS:.s=.o}

OBJB	= ${SRCB:.s=.o}

HEAD	= libasm.h

all:	${NAME}

${NAME}: ${OBJS}
		 ar rc ${NAME} ${OBJS}
		 ranlib ${NAME}

bonus:	${OBJB}
		 ar rc ${NAME} ${OBJB}
		 ranlib ${NAME}

.s.o:
		nasm -f macho64 $< -o ${<:.s=.o}

${OBJS}: ${HEAD}

${OBJB}: ${HEAD}

clean:
		rm -rf ${OBJS} ${OBJB}

fclean:	clean
		rm -rf ${NAME}

re:		fclean all
