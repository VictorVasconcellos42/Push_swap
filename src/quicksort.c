/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:13:53 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/20 12:23:53 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	quick_a(t_stack *stack, int middle)

{
	ft_printf("MIDDLE [%i]\n", middle);
    while (stack->len_b > 5)
    {
		if (stack->b[0] > middle)
			pa(stack, 0);
		else
			rb(stack, 0);
	}
}

void	quick_b(t_stack *stack, int middle)

{
    while (stack->len_b < middle)
    {
		if (stack->a[0] <= middle && stack->a[0] > stack->index)
			pb(stack, 0);
		else
			ra(stack, 0);
	}
}

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
}

void quicksort(t_stack *stack)

{
	int median;

	stack->index = 1;
	median = search_median(stack->a, stack->len_a);
	bubble_sort(stack->len_a, stack->c);
	insert_index(stack);
	quick_b(stack, median);
	while (!ft_isorder(stack) || stack->len_b != 0)
    {
		for (int i = 0; i < stack->len_a; i++)
		{
			ft_printf("STACK A: [%i] - [%p] \t|", stack->a[i], &stack->a[i]);
			ft_printf("STACK C: [%i] - [%p]", stack->c[i], &stack->c[i]);
			ft_printf("\n");
		}
		if (stack->len_b == 0)
			quick_b(stack, median);
		ft_printf("----------------------------------\n");
		for (int i = 0; i < 15; i++)
		{
			ft_printf("STACK A: [%i] - [%p] \t|", stack->a[i], &stack->a[i]);
			ft_printf("STACK B: [%i] - [%p]", stack->b[i], &stack->b[i]);
			ft_printf("\n");
		}
		ft_printf("----------------------------------\n");
		if (stack->len_b > 5)
			quick_a(stack, search_median(stack->b, stack->len_b));
		bubble_sort(stack->len_b, stack->b);
		while (stack->len_b > 0)
		{
			pa(stack, 0);
			ra(stack, 0);
		}
		stack->index = median;
		median = search_median(stack->a, stack->len_a);
		for (int i = 0; i < 15; i++)
		{
			ft_printf("STACK A: [%i] - [%p] \t|", stack->a[i], &stack->a[i]);
			ft_printf("STACK B: [%i] - [%p]", stack->b[i], &stack->b[i]);
			ft_printf("\n");
		}
	}
}