# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fserlut <fserlut@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 23:10:24 by fserlut           #+#    #+#              #
#    Updated: 2019/04/13 20:00:45 by fserlut          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

FILE_O = *.o

HEAD_FOLDER = ./

FLAGC = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGC) -I $(HEAD_FOLDER) -c $(SRC) 
	ar rc $(NAME) $(FILE_O)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -f *.o~
	/bin/rm -f *.h~
	/bin/rm -f *.c~

fclean: clean
	/bin/rm -rf $(NAME) *~

re: fclean all