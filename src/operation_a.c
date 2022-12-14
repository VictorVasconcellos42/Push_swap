/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:28:32 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 10:39:22 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(int *stack_a, int valid)

{
	int	aux;

	aux = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = aux;
	if (valid == 0)
		ft_putendl_fd("sa", 1);
}

void	ra(t_stack	*stack, int valid)

{
	int	*aux_array;
	int	i;
	int	j;

	j = 0;
	i = 1;
	aux_array = (int *)malloc(sizeof(int) * stack->len_a);
	while (j < stack->len_a - 1)
		aux_array[j++] = stack->a[i++];
	aux_array[j] = stack->a[0];
	i = -1;
	while (stack->a[++i])
		stack->a[i] = aux_array[i];
	free(aux_array);
	if (valid == 0)
		ft_putendl_fd("ra", 1);
}

void	rra(t_stack	*stack, int valid)

{
	int	aux;
	int	max;

	max = stack->len_a - 1;
	aux = stack->a[max];
	while (--max >= 0)
		stack->a[max + 1] = stack->a[max];
	stack->a[0] = aux;
	if (valid == 0)
		ft_putendl_fd("rra", 1);
}

void	pa(t_stack *stack, int valid)

{
	int	i;

	if (stack->len_b == 0)
		return ;
	i = stack->len_a + 1;
	while (i-- > 0)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = stack->b[0];
	i = 0;
	while (i++ <= stack->len_b)
		stack->b[i - 1] = stack->b[i];
	stack->len_a++;
	stack->len_b--;
	if (valid == 0)
		ft_putendl_fd("pa", 1);
}
