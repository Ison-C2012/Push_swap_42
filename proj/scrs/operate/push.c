/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:53:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 01:20:11 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *to, t_stack *from)
{
	if (from->size == 0)
		return ;
	nodeadd_head(to, from->head);
	if (from->size == 1)
		stackinit(from);
	else if (from->size == 2)
		nodedelone(from->head);
	else
	{
		nodedelone(from->head);
		from->head->prev = nodelast(from->head);
	}
}

void	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack *b, t_stack *a)
{
	push(b, a);
	ft_printf("pb\n");
}
