/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:56:13 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 10:26:23 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack *stack)

{
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2] \
	&& stack->a[0] < stack->a[2])
		sa(stack->a, 0);
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] \
	&& stack->a[0] > stack->a[2])
		rra(stack, 0);
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2] \
	&& stack->a[1] < stack->a[2])
		ra(stack, 0);
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2] \
	&& stack->a[1] > stack->a[2])
	{
		sa(stack->a, 0);
		rra(stack, 0);
	}
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] \
	&& stack->a[2] > stack->a[0])
	{
		rra(stack, 0);
		sa(stack->a, 0);
	}
}