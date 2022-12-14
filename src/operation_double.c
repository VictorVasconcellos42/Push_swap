/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:32:06 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 10:42:11 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ss(t_stack	*stack)

{
	sa(stack->a, 1);
	sb(stack->b, 1);
	ft_putendl_fd("ss", 1);
}

void	rr(t_stack	*stack)

{
	ra(stack, 1);
	rb(stack, 1);
	ft_putendl_fd("rr", 1);
}

void	rrr(t_stack	*stack)

{
	rra(stack, 1);
	rrb(stack, 1);
	ft_putendl_fd("rrr", 1);
}
