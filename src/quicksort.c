/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:13:53 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/20 02:37:33 by vde-vasc         ###   ########.fr       */
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
		if (stack->a[0] <= middle)
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
	free(stack->c);
}

void quicksort(t_stack *stack)

{
	bubble_sort(stack->len_a, stack->c);
	for (int i = 0; i < 20; i++)
	{
		ft_printf("STACK A: [%i] - [%p] \t|", stack->a[i], &stack->a[i]);
		ft_printf("STACK B: [%i] - [%p]", stack->b[i], &stack->b[i]);
		ft_printf("\n");
	}
	insert_index(stack);
	quick_b(stack, stack->len_a / 2);
	ft_printf("----------------------------------\n");
	for (int i = 0; i < 20; i++)
	{
		ft_printf("STACK A: [%i] - [%p] \t|", stack->a[i], &stack->a[i]);
		ft_printf("STACK B: [%i] - [%p]", stack->b[i], &stack->b[i]);
		ft_printf("\n");
	}
	ft_printf("----------------------------------\n");
	if (stack->len_b > 5)
		quick_a(stack, search_median(stack->b, stack->len_b));
	for (int i = 0; i < 20; i++)
	{
		ft_printf("STACK A: [%i] - [%p] \t|", stack->a[i], &stack->a[i]);
		ft_printf("STACK B: [%i] - [%p]", stack->b[i], &stack->b[i]);
		ft_printf("\n");
	}
}