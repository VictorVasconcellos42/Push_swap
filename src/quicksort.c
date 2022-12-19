/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:13:53 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/19 21:32:40 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void insert_index(t_stack *stack)

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
                stack->a[i] = j;
            j++;
        }
        i++;
    }
}

void quicksort(t_stack *stack)

{
    bubble_sort(stack->len_a, stack->c);
    ft_printf("STACK A PRE-INDEX:\n");
    for (int i = 0; i < stack->len_a; i++)
        ft_printf("[%i]\n", stack->a[i]);
    ft_printf("STACK C POS-INDEX:\n");
    insert_index(stack);
    for (int i  = 0; i < stack->len_a; i++)
        ft_printf("[%i]\n", stack->c[i]);
    ft_printf("STACK A POS-INDEX:\n");
    insert_index(stack);
    for (int i  = 0; i < stack->len_a; i++)
        ft_printf("[%i]\n", stack->a[i]);
}