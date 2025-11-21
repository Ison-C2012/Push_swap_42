/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:41:28 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 19:32:01 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	ft_putendl_fd("Error", STDOUT);
	return ;
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	is_number(char *str)
{
	int	sign;

	sign = 0;
	while (*str)
	{
		if (is_sign(*str))
		{
			sign++;
			str++;
		}
		if (ft_isdigit(*str) == 0 && sign < 2)
			return (FALSE);
		str++;
	}
	return (TRUE);
}

int	is_integer_int(char *str)
{
	long	integer;
	int		minus;

	integer = 0;
	minus = 0;
	if (is_sign(*str))
		minus = (*str++ == '-');
	while (*str)
	{
		integer *= 10;
		integer += *str - '0';
		str++;
	}
	if (minus)
		integer *= -1;
	if (integer > INT_MAX || integer < INT_MIN)
		return (FALSE);
	return (TRUE);
}
