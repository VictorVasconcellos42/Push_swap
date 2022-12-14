# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 15:47:06 by vde-vasc          #+#    #+#              #
#    Updated: 2022/12/14 12:25:40 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror -g

LIBFT	=	libft.a

SRC		=	src/push_swap.c src/validation.c src/utils.c src/operation_a.c src/operation_b.c \
			src/sort_3.c src/operation_double.c src/sort_5.c

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

re: fclean all

