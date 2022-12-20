/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:11:01 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/20 13:43:03 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	all_sort(t_stack *stack)

{
	if (stack->len_a == 2)
		sa(stack->a, 0);
	else if (stack->len_a == 3)
		sort_three(stack);
	else if (stack->len_a <= 5)
		sort_five(stack);
	else
	    radix(stack);
	free_all(stack);
}
