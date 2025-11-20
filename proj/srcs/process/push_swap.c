/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:23:48 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 20:10:23 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
void	push_swap(t_stack *a, t_stack *b)
{
	size_t	size;

	size = a->size;
	if (size == 1)
		return ;
	else if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three_asc(a);
	else if (size <= 5)
		sort_ufive(a, b);
	else
		(void)b;
	return ;
}
