/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:07:01 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/08 15:07:12 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bubble_sort(int len, int *array)

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
}