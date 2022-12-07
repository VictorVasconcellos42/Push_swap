/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:53:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/07 13:03:12 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_isorder(int len, int *array)

{
	int i;

	i = 0;
	while (++i < len)
		if (array[i - 1] > array[i])
			return (0);
	free(array);
	error_msg(2);
	return (0);
}

int	has_duplicate(int len, int *array)

{
	int i;
	int	j;
	
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
				error_msg(2);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_is_signal(char c)

{
	if (c == '-' || c == '+')
		return (0);
	return (1);
}

int	only_number(char **array)

{
	int	i;
	int	j;

	i = 0;
	while (array[++i])
	{
		j = 0;
		if (ft_is_signal(array[i][j]) == 0)
			j++;
		while (array[i][j])
		{
			if (!ft_isdigit(array[i][j]))
				error_msg(2);
			j++;
		}
	}
	return (0);
}
