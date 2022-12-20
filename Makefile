# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 15:47:06 by vde-vasc          #+#    #+#              #
#    Updated: 2022/12/20 16:41:18 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror -g

LIBFT	=	libft.a

SRC		=	src/push_swap.c src/validation.c src/utils.c src/operation_a.c src/operation_b.c \
			src/sort_3.c src/operation_double.c src/sort_5.c src/all_sort.c src/bubble_sort.c \
			src/radix.c

OBJ		=	$(SRC:.c=.o)

STATIC_LIB	=	utils/libft/libft.a 

PATH_LIB	=	utils/libft/

all: $(NAME)

.c.o:
	@$(CC) $(FLAGS) $< -c 
	@mv *.o ./src
	@echo "Files .c changing to .o!!"

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "This time to order!!!"

$(LIBFT):
	@$(MAKE) -C $(PATH_LIB)
	@cp $(STATIC_LIB) ./ 
	@echo "Static library Created!"

clean:
	@$(MAKE) clean -C $(PATH_LIB)
	@rm -rf $(NAME)
	@rm -rf $(OBJ)

fclean: clean
	@$(MAKE) fclean -C $(PATH_LIB)
	@rm -rf $(LIBFT)
	@rm -rf libft.a

#ARG = VAR=$$(echo {1..20}$$'\n' | sort -R | tr '\n' ' ') ;
ARG = 13 91 11 29 62 32 72 3 21 64 95 71 38 56 93 45 6 4 51 57 7 80 47 12 83 33 78 73 36 99 74 53 28 20 39 27 90 40 89 86 41 26 8 48 84 54 43 59 5 42 24 75 46 69 81 58 65 55 85 16 82 9 76 34 68 2 97 31 92 37 77 10 17 23 87 49 67 100 63 88 44 30 15 35 79 66 50 19 25 61 96 22 98 52 70 14 1 18 60 94
run: $(NAME)
	  ./push_swap ${ARG}

re: fclean all

