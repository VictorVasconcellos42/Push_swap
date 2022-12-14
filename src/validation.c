/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:53:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/13 01:58:05 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_isorder(t_stack *stack)

{
	int	i;

	i = 0;
	while (++i < stack->len_a)
		if (stack->a[i - 1] > stack->a[i])
			return (0);
	return (1);
}

int	has_duplicate(t_stack *stack)

{
	int	i;
	int	j;

	i = 0;
	while (i < stack->len_a)
	{
		j = i + 1;
		while (j < stack->len_a)
		{
			if (stack->a[i] == stack->a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_is_signal(char c)

{
	if (c == '-' || c == '+')
		return (0);
	return (1);
}

int	only_number(char **array)

{
	int	i;
	int	j;

	i = 0;
	while (array[++i])
	{
		j = 0;
		if (ft_is_signal(array[i][j]) == 0)
		{
			if (!ft_isdigit(array[i][++j]))
				error_msg(2);
			j++;
		}
		while (array[i][j])
		{
			if (!ft_isdigit(array[i][j]))
				error_msg(2);
			j++;
		}
	}
	return (0);
}

int	checker_array(t_stack *stack)

{
	if (has_duplicate(stack) == 1)
	{
		free(stack->a);
		error_msg(2);
	}
	if (ft_isorder(stack) == 1)
	{
		free(stack->a);
		return (1);
	}
	return (0);
}
