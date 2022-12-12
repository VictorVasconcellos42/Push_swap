/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:09:50 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/12 21:59:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(int *stack_a, int valid)

{
	int aux;

	aux = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = aux;
	if (valid == 0)
		ft_putendl_fd("sa", 1);
}

void	sb(int *stack_b, int valid)

{
	int	aux;

	aux = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = aux;
	if (valid == 0)
		ft_putendl_fd("sb", 1);
}

void    ss(t_stack	*stack)

{
	sa(stack->a, 1);
	sb(stack->b, 1);
	ft_putendl_fd("ss", 1);
}

void	ra(t_stack	*stack, int valid)

{
	int	*aux_array;
	int	i;
	int	j;

    j = 0;
	i = 1;
    aux_array = (int *)malloc(sizeof(int) * stack->len);
	while (j < stack->len - 1)
		aux_array[j++] = stack->a[i++];
	aux_array[j] = stack->a[0];
	i = -1;
	while (stack->a[++i])
		stack->a[i] = aux_array[i];
	if (valid == 0)
		ft_putendl_fd("ra", 1);
}

void    rb(t_stack	*stack, int valid)

{
	int	*aux_array;
	int	i;
	int	j;

    j = 0;
	i = 1;
    aux_array = (int *)malloc(sizeof(int) * stack->len);
	while (j < stack->len - 1)
		aux_array[j++] = stack->a[i++];
	aux_array[j] = stack->b[0];
	i = -1;
	while (stack->b[++i])
		stack->b[i] = aux_array[i];
	if (valid == 0)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stack	*stack)

{
	ra(stack, 1);
    rb(stack, 1);
	ft_putendl_fd("rr", 1);
}