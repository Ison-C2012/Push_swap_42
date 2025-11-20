/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:52:38 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 20:15:12 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
void	sort_two(t_stack *stack)
{
	int	x;
	int	y;

	x = stack->head->value;
	y = stack->head->next->value;
	if (x > y)
		sa(stack);
}

/* ************************************************************************** */
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

/* ************************************************************************** */
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

/* ************************************************************************** */
void	sort_ufive(t_stack *a, t_stack *b)
{
	size_t	i;

	i = 0;
	while (i < 3)
	{
		if (a->head->value < a->head->next->value)
		{
			if (a->head->value > a->head->prev->value)
				rra(a);
		}
		else
		{
			if (a->head->next->value < a->head->prev->value)
				sa(a);
			else
				rra(a);
		}
		pb(b, a);
		i++;
	}
	sort_two(a);
	sort_three_dec(b);
	while (i--)
		pa(a, b);
}
