/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:36:48 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 23:42:12 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->head->value;
	stack->head->value = stack->head->next->value;
	stack->head->next->value = tmp;
}

void	sa(t_stack *a)
{
	swap(a);
	print_sa();
}

void	sb(t_stack *b)
{
	swap(b);
	print_sb();
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	print_ss();
}
