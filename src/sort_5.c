/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:49:12 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 14:03:22 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_lowers(t_stack *stack)

{
	int min;
	int	i;

	min = INT_MAX;
	i = 0;
	while (i < stack->len_a)
	{
		if (stack->a[i] < min)
		    min = stack->a[i];
        i++;
	}
	return (min);
}

void	sort_five(t_stack	*stack)

{
	int	small;
	int i;
	
	while (stack->len_a > 3)
	{
		small = find_lowers(stack);
		i = 0;
		if (stack->a[i] != small)
		{
			while (stack->a[i] != small)
			{
				if (stack->a[i] == small)
					break ;
				rra(stack, 0);
			}
		}
		pb(stack, 0);
	}
	sort_three(stack);
	pa(stack, 0);
	pa(stack, 0);
}