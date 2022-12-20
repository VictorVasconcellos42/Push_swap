/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:49:12 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/20 18:41:14 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_lowers(t_stack *stack)

{
	int	min;
	int	i;

	min = stack->a[0];
	i = 1;
	while (i < stack->len_a)
	{
		if (stack->a[i] < min)
		{
			min = stack->a[i];
			stack->index = i;
		}
		i++;
	}
	return (min);
}

static void	operation(char *op, t_stack *stack)

{
	if (ft_strncmp(op, "ra", 2) == 0)
	{
		ra(stack, 0);
		stack->index--;
	}
	else if (ft_strncmp(op, "rra", 3) == 0)
	{
		rra(stack, 0);
		stack->index++;
	}
	else if (ft_strncmp(op, "pa", 2) == 0)
	{
		pa(stack, 0);
		pa(stack, 0);
	}
}

void	sort_five(t_stack	*stack)

{
	int	small;

	while (stack->len_a > 3)
	{
		small = find_lowers(stack);
		if (stack->a[0] != small)
		{
			while (stack->index > 0)
			{
				if (stack->a[0] == small || stack->index >= 5)
					break ;
				if (stack->index <= 2 && stack->index > 0)
					operation("ra", stack);
				else
					operation("rra", stack);
				if (stack->a[0] == small)
					break ;
			}
		}
		pb(stack, 0);
	}
	sort_three(stack);
	operation("pa", stack);
}
