# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 16:49:21 by ryoon             #+#    #+#              #
#    Updated: 2022/01/26 16:49:23 by ryoon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = .
OBJ_DIR = .
TARGET = BSQ
SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))
OBJS = $(SRCS:.c=.o)
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

all: $(TARGET)
.PHONY: all clean fclean re
clean:
	rm -f *.o *.d
fclean: clean
	rm -f $(TARGET)
re: fclean all
test:
	norminette

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET) $(LDFLAGS)
