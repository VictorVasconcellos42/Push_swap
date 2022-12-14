/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:09:50 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 10:41:05 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(int *stack_b, int valid)

{
	int	aux;

	aux = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = aux;
	if (valid == 0)
		ft_putendl_fd("sb", 1);
}

void	rb(t_stack	*stack, int valid)

{
	int	*aux_array;
	int	i;
	int	j;

	j = 0;
	i = 1;
	aux_array = (int *)malloc(sizeof(int) * stack->len_b);
	while (j < stack->len_b - 1)
		aux_array[j++] = stack->a[i++];
	aux_array[j] = stack->b[0];
	i = -1;
	while (stack->b[++i])
		stack->b[i] = aux_array[i];
	free(aux_array);
	if (valid == 0)
		ft_putendl_fd("rb", 1);
}

void	rrb(t_stack	*stack, int valid)

{
	int	aux;
	int	max;

	max = stack->len_a - 1;
	aux = stack->b[max];
	while (--max >= 0)
		stack->b[max + 1] = stack->b[max];
	stack->b[0] = aux;
	if (valid == 0)
		ft_putendl_fd("rrb", 1);
}

void	pb(t_stack *stack, int valid)

{
	int	i;

	if (stack->len_a == 0)
		return ;
	i = stack->len_b + 1;
	while (i-- > 0)
		stack->b[i] = stack->b[i - 1];
	stack->b[0] = stack->a[0];
	i = 0;
	while (i++ <= stack->len_a)
		stack->a[i - 1] = stack->a[i];
	stack->len_a--;
	stack->len_b++;
	if (valid == 0)
		ft_putendl_fd("pb", 1);
}