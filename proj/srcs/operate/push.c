/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:53:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 16:05:13 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack *to, t_stack *from)
{
	t_node	*new;

	if (from->size == 0)
		return ;
	new = from->head;
	from = nodecut(from);
	to = nodeadd(to, new);
}

void	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	print_pa();
}

void	pb(t_stack *b, t_stack *a)
{
	push(b, a);
	print_pb();
}
