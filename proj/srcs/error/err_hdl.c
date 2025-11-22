/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hdl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:47:20 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 22:17:17 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define STDERR 2

void	err_input(void)
{
	ft_putendl_fd("Error", STDERR);
	exit(EXIT_FAILURE);
}

void	err_malloc(void)
{
	ft_putendl_fd("Error: Memory Allocation Failed", STDERR);
	exit(EXIT_FAILURE);
}
