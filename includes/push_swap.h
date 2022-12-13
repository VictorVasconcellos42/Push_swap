/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:25:04 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/13 01:43:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../utils/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define MIN_RUN 32

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	
}	t_stack;

int		only_number(char **argv);
void	error_msg(int fd);
int		has_duplicate(t_stack *stack);
int		ft_isorder(t_stack *stack);
int		checker_array(t_stack *stack);
void	init_stack_b(t_stack *stack);
int		min(int a, int b);
void	ss(t_stack *stack);
void	sb(int *stack_b, int valid);
void	sa(int *stack_a, int valid);
void	ra(t_stack	*stack, int valid);
void    rra(t_stack	*stack, int valid);
void    rrb(t_stack	*stack, int valid);
void	pa(t_stack *stack, int valid);
void    pb(t_stack *stack, int valid);



#endif
