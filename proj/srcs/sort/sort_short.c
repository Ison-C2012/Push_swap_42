/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:52:38 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 23:07:45 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_asc(t_stack *stack)
{
	int	x;
	int	y;

	x = stack->head->value;
	y = stack->head->next->value;
	if (x > y)
		sa(stack);
}

void	sort_two_dec(t_stack *stack)
{
	int	x;
	int	y;

	x = stack->head->value;
	y = stack->head->next->value;
	if (x < y)
		sa(stack);
}

void	sort_three_asc(t_stack *stack)
{
	int	x;
	int	y;
	int	z;

	x = stack->head->value;
	y = stack->head->next->value;
	z = stack->head->prev->value;
	if (x < y && y < z)
		return ;
	else if (x < y && x < z)
	{
		rra(stack);
		sa(stack);
	}
	else if (x < y && x > z)
		rra(stack);
	else if (x > y && y > z)
	{
		sa(stack);
		rra(stack);
	}
	else if (x > y && x < z)
		sa(stack);
	else
		ra(stack);
}

void	sort_three_dec(t_stack *stack)
{
	int	x;
	int	y;
	int	z;

	x = stack->head->value;
	y = stack->head->next->value;
	z = stack->head->prev->value;
	if (x < y && y < z)
	{
		sa(stack);
		rra(stack);
	}
	else if (x < y && x < z)
		rra(stack);
	else if (x < y && x > z)
	{
		rra(stack);
		sa(stack);
	}
	else if (x > y && y > z)
		return ;
	else if (x > y && x < z)
		ra(stack);
	else
		sa(stack);
}

void	sort_ufive(t_stack *a, t_stack *b)
{
	size_t	len;

	while (a->size > 3)
	{
		len = getlen_tomin(a);
		if (a->size - len > len)
			a = stack_movehead(a, len, &ra);
		else
			a = stack_movehead(a, a->size - len, &rra);
		pb(b, a);
	}
	sort_three_asc(a);
	sort_two_dec(b);
	while (b->size)
		pa(a, b);
}
