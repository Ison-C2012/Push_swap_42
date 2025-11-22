/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:41:28 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/23 00:12:16 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define TRUE 1
#define FALSE 0

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

int	is_arr_unique(long *arr, size_t size)
{
	size_t	i;

	sort_arr(arr, size);
	i = 1;
	while (i < size)
	{
		if (arr[i] == arr[i - 1])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	is_sorted(t_stack *stack)
{
	t_node	*node;
	size_t	i;

	node = stack->head;
	i = 0;
	while (i++ < stack->size)
	{
		if (node->value > node->next->value)
			break ;
		node = node->next;
	}
	if (i == stack->size)
		return (TRUE);
	return (FALSE);
}
