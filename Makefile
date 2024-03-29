# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murphy <murphy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 15:48:39 by sngmasom          #+#    #+#              #
#    Updated: 2022/04/04 15:50:31 by murphy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_atoi.c \
      ft_bzero.c\
      ft_calloc.c \
      ft_memcpy.c \
      ft_memset.c \
      ft_memmove.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strnstr.c \
      ft_strdup.c \
      ft_strncmp.c \
      ft_putchar_fd.c\
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_itoa.c \
      ft_putnbr_fd.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_striteri.c \
      ft_strmapi.c

SRCBONUS = ft_lstnew.c \
	   ft_lstadd_front.c \
	   ft_lstsize.c \
	   ft_lstlast.c \
	   ft_lstdelone.c \
	   ft_lstclear.c \
	   ft_lstadd_back.c \
	   ft_lstiter.c \
	   ft_lstmap.c


OBJSBONUS = $(SRCBONUS:.c=.o)

OBJS = $(SRC:.c=.o)

NAME = libft.a

CC = gcc
CC_FLAG = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CC_FLAG} -c $< -o $@


$(NAME): ${OBJS}
	ar -rcs ${NAME} ${OBJS}

norm:
	norminett *.c

all: ${NAME}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re:fclean all

bonus: ${OBJS} ${OBJSBONUS}
	ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

.PHONY:norm all clean fclean re bonus
