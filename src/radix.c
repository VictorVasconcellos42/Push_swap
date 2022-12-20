/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 05:35:26 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/20 11:10:59 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* static int	last_number(t_stack *stack, int index)

{
	return (stack->a[stack->len_a - index]);
}
 */
void	insert_index(t_stack *stack)

{
	int i;
	int j;
	i = 0;
	while (i < stack->len_a)
	{
		j = 0;
		while (j < stack->len_a)
		{
			if (stack->a[i] == stack->c[j])
			{
				stack->a[i] = ++j;
				break ;
			}
			j++;
		}
		i++;
	}
	for (int i = 0; i < stack->len_a; i++)
		ft_printf("STACK A: [%i] \n", stack->a[i]);
}

void	radix(t_stack *stack)

{
	int	i;
	int	j;
	int	size;

	i = 1;
    size = stack->len_a;
	bubble_sort(stack->len_a, stack->c);
	insert_index(stack);
	while (ft_isorder(stack) == 0)
	{
		while (j <= size)
		{
			if (!(stack->a[0] & i))
				pb(stack, 0);
			else
				ra(stack, 0);
			j++;
		}
		while (stack->len_b > 0)
			pa(stack, 0);
		i = i << 1;
		j = 0;
	}
	ft_printf("--------------------------\n", stack->a[i]);
	for (int i = 0; i < stack->len_a; i++)
		ft_printf("STACK A: [%i] \n", stack->a[i]);
}