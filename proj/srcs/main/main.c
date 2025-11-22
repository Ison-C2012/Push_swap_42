/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:13:55 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 21:02:54y keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define SUCCESS 0
#define NO_ARG 1

/*main func checks its arguments and pass them to push_swap func.*/

int	main(int argc, char *argv[])
{
	long	*array;
	t_stack	*a;
	t_stack	*b;

	if (argc == NO_ARG)
		return (SUCCESS);
	array = get_arg_into_arr(&argv[1], argc - 1);
	a = stack_create(array, argc - 1);
	free(array);
	b = stack_create((long *) NULL, 0);
	push_swap(a, b);
	stack_free(a);
	stack_free(b);
	return (SUCCESS);
}
