/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 03:41:15 by vde-vasc          #+#    #+#             */
/*   Updated: 2022/12/07 19:31:16 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	min(int a, int b)

{
	if (a > b)
		return (b);
	return (a);
}
void	error_msg(int fd)

{
	ft_putendl_fd("Error", fd);
	exit(1);
}
