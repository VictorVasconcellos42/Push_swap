/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:25:04 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/11/30 15:59:59 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../utils/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_stack

{
	void *content;

	struct s_stack *prev;
	struct s_stack *next;
} t_stack ;

# endif
