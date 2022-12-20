/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 03:41:15 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/19 23:50:03 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	search_median(int *stack, int len)

{
	return ((min(stack, len) + max(stack, len)) / 2);
}

void	init_stack(t_stack *stack, char** argv)

{
	stack->b = ft_calloc(sizeof(int), stack->len_a);
	stack->c = create_array(stack->len_a, argv);
	stack->len_b = 0;
	stack->index = 0;
}

int max(int *stack, int len)

{
	int	max;
	int	i;

	max = stack[0];
	i = 0;
	while (++i < len)
		if (stack[i] > max)
			max = stack[i];
	return (max);
}

int	min(int *stack, int len)

{
	int	min;
	int	i;

	min = stack[0];
	i = 0;
	while (++i < len)
		if (stack[i] < min)
			min = stack[i];
	return (min);
}

void	error_msg(int fd)

{
	ft_putendl_fd("Error", fd);
	exit(1);
}
