# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 15:47:06 by vde-vasc          #+#    #+#              #
#    Updated: 2022/12/20 16:37:23 by vde-vasc         ###   ########.fr        #
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
ARG = 54 125 185 196 260 202 119 167 238 -2 212 34 190 1 35 13 256 230 79 59 174 19 214 32 128 30 94 257 176 139 227 276 148 93 132 58 78 250 114 115 242 141 84 274 225 62 172 151 241 281 67 3 76 143 267 121 239 41 258 277 64 169 254 203 158 103 235 36 52 160 135 38 262 47 298 56 278 45 98 161 283 131 205 233 69 209 17 26 234 156 110 162 195 208 280 43 95 213 40 72 206
run: $(NAME)
	  ./push_swap ${ARG}

re: fclean all

