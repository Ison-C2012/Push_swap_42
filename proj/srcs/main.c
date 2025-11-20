/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:14:54 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 17:06:21 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

# define NO_PARAM 1
# define INVALID_PARAM 1

/*main func checks its parameters and pass them to push_swap func.*/

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc == NO_PARAM)
		return (0);
	if (check_param(argc - 1, &argv[1]))
		return (INVALID_PARAM);
	a = stack_create(&argv[1], argc - 1);
	b = stack_create((char **)NULL, 0);
	stack_print(a, b);
	pb(b, a);
	stack_print(a, b);
	pb(b, a);
	stack_print(a, b);
	pb(b, a);
	stack_print(a, b);
	//push_swap(a, b);
	return (0);
}
