/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hdl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:47:20 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 23:53:28 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define STDERR 2

void	err_exit(void)
{
	ft_putendl_fd("Error", STDERR);
	exit(EXIT_FAILURE);
}
