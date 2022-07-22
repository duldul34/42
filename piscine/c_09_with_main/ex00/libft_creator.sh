# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoon <ryoon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 17:00:37 by ryoon             #+#    #+#              #
#    Updated: 2022/01/26 17:01:17 by ryoon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cc="gcc"
src=*.c
flags="-c -Wall -Werror -Wextra"
lib_name="libft.a"

$cc $flags $src
ar rc $lib_name *.o
ranlib $lib_name
rm *.o
