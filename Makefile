# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjouffro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/14 17:13:59 by mjouffro          #+#    #+#              #
#    Updated: 2018/11/20 19:32:45 by pthan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# EXECUTABLE :
NAME	=	libft.a


# COMPILATION :
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra


# SRCS && OBJS
SRCS =		ft_atoi.c				\
		ft_bzero.c				\
		ft_isalnum.c				\
		ft_isalpha.c				\
		ft_isascii.c				\
		ft_isdigit.c				\
		ft_isprint.c				\
		ft_itoa.c				\
		ft_memalloc.c				\
		ft_memccpy.c				\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_memcpy.c				\
		ft_memdel.c				\
		ft_memmove.c				\
		ft_memset.c				\
		ft_putchar_fd.c				\
		ft_putchar.c				\
		ft_putendl_fd.c				\
		ft_putendl.c				\
		ft_putnbr_fd.c				\
		ft_putnbr.c				\
		ft_putstr_fd.c				\
		ft_putstr.c				\
		ft_strcat.c				\
		ft_strchr.c				\
		ft_strclr.c				\
		ft_strcmp.c				\
		ft_strcpy.c				\
		ft_strdel.c				\
		ft_strdup.c				\
		ft_strequ.c				\
		ft_striter.c				\
		ft_striteri.c				\
		ft_strjoin.c				\
		ft_strlcat.c				\
		ft_strlen.c				\
		ft_strmap.c				\
		ft_strmapi.c				\
		ft_strncat.c				\
		ft_strncmp.c				\
		ft_strncpy.c				\
		ft_strnequ.c				\
		ft_strnew.c				\
		ft_strnstr.c				\
		ft_strrchr.c				\
		ft_strsplit.c				\
		ft_strstr.c				\
		ft_strsub.c				\
		ft_strtrim.c				\
		ft_tolower.c				\
		ft_toupper.c				\

OBJS	=	$(SRCS:.c=.o)


#  *********************************************************************** #
#
# COLORS
#
# LOG_CLEAR			=  \033[2K
# LOG_UP			= \033[A
# LOG_NOCOLOR		= \033[0m
# LOG_BOLD			= \033[1m
# LOG_UNDERLINE		= \033[4m
# LOG_BLINKING		= \033[5m
# LOG_BLACK			= \033[1;30m
# LOG_RED			= \033[1;31m
# LOG_GREEN			= \033[1;32m
# LOG_YELLOW		= \033[1;33m
# LOG_BLUE			= \033[1;34m
# LOG_VIOLET		= \033[1;35m
# LOG_CYAN			= \033[1;36m
# LOG_WHITE			= \033[1;37m
#
# *********************************************************************** #


# RULES :

all:	$(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean flclean re
