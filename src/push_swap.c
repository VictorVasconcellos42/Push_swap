/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/14 14:10:22 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*create_array(int argc, char **argv)

{
	int	*array;
	int	i;
	int	j;

	i = 0;
	j = 1;
	array = malloc((argc) * sizeof(int));
	if (!array)
		return (NULL);
	while (--argc >= 0)
		array[i++] = ft_atoi(argv[j++]);
	return (array);
}

int	main(int argc, char **argv)

{
	t_stack	stack;
	int		i;

	if (argc >= 3)
	{
		only_number(argv);
		stack.len_a = argc - 1;
		stack.a = create_array(stack.len_a, argv);
		if (checker_array(&stack) == 1)
			return (0);
		init_stack_b(&stack);
		i = -1;
		if (stack.len_a == 3)
			sort_three(&stack);
		else if (stack.len_a == 5)
		    sort_five(&stack);
/* 		ft_putendl_fd("----------STACK A----------", 1);
		while (++i < stack.len_a)
			ft_printf("%i\n", stack.a[i]); */
	}
	return (0);
}
