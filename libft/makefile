# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 23:08:46 by panand            #+#    #+#              #
#    Updated: 2022/08/30 09:42:06 by panand           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
CC 			= 	gcc
CFLAGS 		= 	-Wall -Wextra -Werror -c
AR			= 	ar rcs

SRCS		= 	ft_atoi \
				ft_putchar \
				ft_bzero \
				ft_calloc \
				ft_isalnum \
				ft_isalpha \
				ft_isascii \
				ft_isdigit \
				ft_isprint \
				ft_memchr \
				ft_memcpy \
				ft_memcmp \
				ft_memmove \
				ft_memset \
				ft_strchr \
				ft_strdup \
				ft_strjoin \
				ft_strlcat \
				ft_split \
				ft_putchar_fd \
				ft_putendl_fd \
				ft_putnbr_fd \
				ft_putnbr_base \
				ft_putstr_fd \
				ft_itoa \
				ft_strmapi \
				ft_striteri \
				ft_strlcpy \
				ft_strlen \
				ft_strncmp \
				ft_strnstr \
				ft_strrchr \
				ft_strtrim \
				ft_substr \
				ft_toupper \
				ft_tolower \
				ft_putstr \
				ft_uitoa \

OBJS = $(SRCS:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $(<.c=.o)

$(NAME): $(OBJS)
		 $(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
