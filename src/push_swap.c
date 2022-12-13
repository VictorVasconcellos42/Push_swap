/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/13 01:57:46 by vde-vasc         ###   ########.fr       */
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
	int	i;

	if (argc >= 3)
	{
		ft_printf("NUMBER ARGUMENTS: [%i]\n", argc - 1);
		only_number(argv);
		stack.len_a = argc - 1;
		stack.a = create_array(stack.len_a, argv);
		if (checker_array(&stack) == 1)
			return (0);
		init_stack_b(&stack);
		i = 0;
		pb(&stack, 0);
		pb(&stack, 0);
		sa(stack.a, 0);
		ft_putendl_fd("----------STACK A----------", 1);
		while (stack.a[i])
			ft_printf("%i\n", stack.a[i++]);
		ft_putendl_fd("----------STACK B----------", 1);
		i = 0;
		while (stack.b[i])
			ft_printf("%i\n", stack.b[i++]);
	}
	return (0);
}
