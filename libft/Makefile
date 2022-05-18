# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoon <ryoon@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 04:34:07 by ryoon             #+#    #+#              #
#    Updated: 2022/05/19 04:44:36 by ryoon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	      = libft.a

CC		= gcc
CFLAG	      = -Wall -Wextra -Werror

RM		= rm -f

AR		= ar
ARFLAGS       = crs

INCLUDES	= ./libft.h

SRCS	= ft_strlen \
			ft_strlcpy \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_strnstr \
			ft_strdup \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_strmapi \
			ft_striteri \
			ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_calloc \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \
			ft_atoi \
			ft_itoa \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \

SRCS_BONUS = ft_lstnew \
				ft_lstadd_front \
				ft_lstsize \
				ft_lstlast \
				ft_lstadd_back \
				ft_lstdelone \
				ft_lstclear \
				ft_lstiter \
				ft_lstmap \

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY : all clean fclean re
