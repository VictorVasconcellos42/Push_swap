/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:25:04 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 13:49:17 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../utils/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define MIN_RUN 32

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;	
}	t_stack;

int		only_number(char **argv);
int		*create_array(int argc, char **argv);
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
void	rra(t_stack	*stack, int valid);
void	rb(t_stack	*stack, int valid);
void	rrb(t_stack	*stack, int valid);
void	pa(t_stack *stack, int valid);
void	pb(t_stack *stack, int valid);
void	sort_three(t_stack *stack);
void	rr(t_stack	*stack);
int		find_lowers(t_stack *stack);
void	sort_five(t_stack	*stack);
#endif
