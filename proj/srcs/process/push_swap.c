/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:23:48 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 13:50:49 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(int x, int y)
{
	if (x > y)
		print_sa();
}

void	sort_three(int x, int y, int z)
{
	if (x < y && y < z)
		return ;
	else if (x < y && x < z)
	{
		print_rra();
		print_sa();
	}
	else if (x < y && x > z)
		print_rra();
	else if (x > y && y > z)
	{
		print_ra();
		print_ra();
	}
	else if (x > y && x < z)
		print_sa();
	else if (x > y && x > z)
		print_ra();
}

void	push_swap(size_t nbr, char *param[])
{

	if (nbr == 1)
		return ;
	if (nbr == 2)
	{
		sort_two(ft_atoi(param[0]), ft_atoi(param[1]));
		return ;
	}
	else if (nbr == 3)
	{
		sort_three(ft_atoi(param[0]), ft_atoi(param[1]), ft_atoi(param[2]));
		return ;
	}
	else
		return ;
}
