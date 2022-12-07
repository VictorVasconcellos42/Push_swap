/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:25:04 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/07 21:26:25 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../utils/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define RUN 64

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

int		only_number(char **argv);
void	error_msg(int fd);
int		has_duplicate(int len, int *array);
int		ft_isorder(int len, int *array);
int		checker_array(int len, int *array);
int		min(int a, int b);
void	insertion(int *array, int left, int right);
void	merge(int *array, int l, int m, int r);
void	timsort(int len, int *array);
#endif
