/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/07 12:52:30 by vde-vasc         ###   ########.fr       */
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
		i = 0;
		only_number(argv);
		array = create_array(argc, argv);
		has_duplicate(argc - 1, array);
		ft_isorder(argc - 1, array);
		while (--argc > 0)
			ft_printf("%i\n", array[i++]);
	}
	return (0);
}
