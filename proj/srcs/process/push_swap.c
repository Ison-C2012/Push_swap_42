/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:23:48 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 00:01:02 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *a, t_stack *b)
{
	size_t	size;

	size = a->size;
	if (size == 1)
		return ;
	else if (size == 2)
		sort_two_asc_a(a);
	else if (size == 3)
		sort_three_asc_a(a);
	else if (size <= 5)
		sort_ufive(a, b);
	else
		(void)b;
	return ;
}
