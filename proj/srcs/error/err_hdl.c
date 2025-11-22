/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hdl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:47:20 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 19:08:04 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	err_input(long *arr)
{
	free(arr);
	ft_putendl_fd("Error", STDOUT);
	exit(EXIT_FAILURE);
}

void	err_malloc(void)
{
	ft_putendl_fd("Error: Memory Allocation", STDOUT);
	exit(EXIT_FAILURE);
}
