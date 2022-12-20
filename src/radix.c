/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 05:35:26 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/20 06:52:30 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	last_number(t_stack *stack, int index)

{
	return (stack->a[stack->len_a - index]);
}

void	radix(t_stack *stack)

{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
    size = stack->len_a;
	while (ft_isorder(stack) == 0)
	{
		j = 0;
		while (j <= size)
		{
			if (((last_number(stack, 0) >> i) & 1) == 1)
				ra(stack, 0);
			else
				pb(stack, 0);
			while (stack->len_b >= 0)
				pa(stack, 0);
			j++;
		}
	}
}