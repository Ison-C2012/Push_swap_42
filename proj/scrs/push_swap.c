/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:23:48 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/19 22:40:22 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FAIL 1

void	push_swap(size_t nbr, char *param[])
{
	t_list	stack_a;
	t_list	stack_b;

	stack_a = create_stack(nbr, param);
	if (stack_a == NULL)
		exit(FAIL);
	if (nbr == 1)
		sort_one();
	else if (nbr <= 3)
		sort_three();
	else if (nbr <= 5)
		sort_five();
	else
		sort_long();
}
