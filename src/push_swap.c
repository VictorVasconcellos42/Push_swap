/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/12 20:37:42 by codespace        ###   ########.fr       */
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
		stack.len = argc - 1;
		only_number(argv);
		stack.a = create_array(stack.len, argv);
		if (checker_array(&stack) == 1)
			return (0);
		i = 0;
		while (--argc > 0)
			ft_printf("%i\n", stack.a[i++]);
	}
	return (0);
}
