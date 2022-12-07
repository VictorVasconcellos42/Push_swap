/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:53:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/07 03:06:59 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int only_number(char **array)

{
    int i;
    int j;
    
    i = 0;
    while (array[++i])
    {
        j = -1;
        while (array[i][++j])
        {
            if (!ft_isdigit(array[i][j]))
            {
               ft_putendl_fd("Error", 2);
               exit(1);
            }
        }
    }
    return (0);
}