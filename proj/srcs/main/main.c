/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ /*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:14:54 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 19:02:48 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define NO_ARG 1
#define ERROR 1

/*main func checks its arguments and pass them to push_swap func.*/

int	main(int argc, char *argv[])
{
	long	*array;
	t_stack	*a;
	t_stack	*b;

	if (argc == NO_ARG)
		return (0);
	array = (long *)malloc((argc - 1) * sizeof(long));
	if (array == NULL)
		exit(1);
	get_arg_into_arr(array, &argv[1], argc - 1);
	a = stack_create(array, argc - 1);
	b = stack_create((long *) NULL, 0);
//	print_stack(a, b);
	push_swap(a, b);
	stack_free(a);
	stack_free(b);
	return (0);
}
