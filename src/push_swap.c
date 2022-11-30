/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/11/30 16:09:43 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)

{
	int i;


	i = 0;
	if (argc > 3)
	{
		while (i < argc)
		{
			ft_printf("%s\n", argv[i++]); 
		}
	}
	return (0);
}
