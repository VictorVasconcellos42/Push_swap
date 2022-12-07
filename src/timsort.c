/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:35:12 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/07 21:22:40 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	insertion(int *array, int left, int right)

{
	int i;
	int aux;
	int j;
	
	i = left + 1;
	while (i <= right)
	{
		aux = array[i];
		j = i - 1;
		while (j >= left && array[j] > aux)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = aux;
		i++;
	}
}

void	*create_len(int value, int div, int left)

{
	int *array;

	if (left != 0)
		array = malloc((div - value + 1) * sizeof(int));
	else
		array = malloc((div - value) * sizeof(int));
	if (!array)
		return (NULL);
	return (array);
}

void	merge(int *array, int l, int m, int r)

{
	int 		*left;
	int 		*right;
	int i;
	int j;
	int k;
	const	int len = m - l - 1;
	const	int	len2 = r - m;

	i = -1;
	left = create_len(l, m, 1);
	right = create_len(m, r, 0);
	while (++i < len)
		left[i] = array[l + i];
	i = -1;
	while (++i < len2)
		right[i] = array[m + 1 + i];
	i = 0;
	j = 0;
	k = l;
	while (i < len && j < len2)
	{
		if (left[i] <= right[j])
			array[k++] = left[i++];
		else
			array[k++] = right[j++];
	}
	while (i < len)
		array[k++] = left[i++];
	while (j < len2)
		array[k++] = right[j++];
}

void	timsort(int len, int *array)

{
	int i;
	int	size;
	int	left;
	int	right;
	int	mid;
	int step;
	
	step = 0;
	i = 0;
	while (i < len)
	{
		insertion(array, i, min((i + RUN -1), (len -1)));
		step++;
		i += RUN;
	}
	size = RUN;
	while (size < len)
	{
		left = 0;
		while (left < len)
		{
			mid = left + size - 1;
			right = min((left + 2 * size - 1), (len - 1));
			if (mid < right)
				merge(array, left, mid, right);
			left += 2 * size;
		}
	}
}