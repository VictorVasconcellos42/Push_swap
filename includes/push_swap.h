/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:25:04 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/12 21:47:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../utils/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define MIN_RUN 32

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	len;
	
}	t_stack;

int		only_number(char **argv);
void	error_msg(int fd);
int		has_duplicate(t_stack *stack);
int		ft_isorder(t_stack *stack);
int		checker_array(t_stack *stack);
int		min(int a, int b);
void	insertion(int *array, int left, int right);
void	merge(int *array, int l, int m, int r);
void	timsort(int len, int *array);
void	ra(t_stack	*stack, int valid);

#endif
