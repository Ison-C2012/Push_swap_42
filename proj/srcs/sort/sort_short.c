/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:52:38 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 23:58:13 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_asc_a(t_stack *a)
{
	int	x;
	int	y;

	x = a->head->value;
	y = a->head->next->value;
	if (x > y)
		sa(a);
}

void	sort_three_asc_a(t_stack *a)
{
	int	x;
	int	y;
	int	z;

	x = a->head->value;
	y = a->head->next->value;
	z = a->head->prev->value;
	if (x < y && y < z)
		return ;
	else if (x < y && x < z)
	{
		rra(a);
		sa(a);
	}
	else if (x < y && x > z)
		rra(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && x < z)
		sa(a);
	else
		ra(a);
}

void	sort_two_dsc_b(t_stack *b)
{
	int	x;
	int	y;

	x = b->head->value;
	y = b->head->next->value;
	if (x < y)
		sb(b);
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
	sort_three_asc_a(a);
	sort_two_dsc_b(b);
	while (b->size)
		pa(a, b);
}
