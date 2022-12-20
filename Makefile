# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 15:47:06 by vde-vasc          #+#    #+#              #
#    Updated: 2022/12/20 05:23:56 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror -g

LIBFT	=	libft.a

SRC		=	src/push_swap.c src/validation.c src/utils.c src/operation_a.c src/operation_b.c \
			src/sort_3.c src/operation_double.c src/sort_5.c src/all_sort.c src/bubble_sort.c \
			src/quicksort.c

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
ARG = 0 11 3 17 7 8 5 13 15 1 10 16 19 20 21
run: $(NAME)
	  ./push_swap ${ARG}

re: fclean all

