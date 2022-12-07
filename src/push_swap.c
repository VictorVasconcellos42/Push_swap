/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/07 21:17:59 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* void	bubble_sort(int len, int *array)

{
	int i;
	int j;
	int swap;
	int step = 0;

	i = 0;
	while (++i < len)
	{
		j = -1;
		while (++j < len - 1)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				step++;
			}
		}
	}
	ft_printf("step: [%i]\n", step);
} */

int	*create_array(int argc, char **argv)

{
	int	*array;
	int	i;
	int	j;

	i = 0;
	j = 1;
	array = malloc((argc - 1) * sizeof(int));
	if (!array)
		return (NULL);
	while (--argc > 0)
		array[i++] = ft_atoi(argv[j++]);
	return (array);
}

int	main(int argc, char **argv)

{
	int	*array;
	int	i;

	if (argc >= 3)
	{
		ft_printf("NUMBER ARGUMENTS: [%i]\n", argc - 1);
		i = 0;
		only_number(argv);
		array = create_array(argc, argv);
		if (checker_array(argc - 1, array) == 1)
			return (0);
		timsort(argc - 1, array);
		while (--argc > 0)
			ft_printf("%i\n", array[i++]);
	}
	return (0);
}
