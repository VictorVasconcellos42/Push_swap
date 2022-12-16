/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 03:41:15 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 10:24:32 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_stack_b(t_stack *stack)

{
	stack->b = ft_calloc(sizeof(int), stack->len_a);
	stack->len_b = 0;
	stack->index = 0;
}

int	min(int a, int b)

{
	if (a > b)
		return (b);
	return (a);
}

void	error_msg(int fd)

{
	ft_putendl_fd("Error", fd);
	exit(1);
}
