/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:14:54 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 00:10:09 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define NO_PARAM 1
#define ERROR 1

int	error(void)
{
	ft_putendl_fd("Error", STDOUT);
	return (ERROR);
}

/*main func checks its parameters and pass them to push_swap func.*/

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc == NO_PARAM)
		return (0);
	if (check_param(argc - 1, &argv[1]))
		return (error());
	a = stack_create(&argv[1], argc - 1);
	b = stack_create((char **) NULL, 0);
	push_swap(a, b);
	stack_free(a);
	stack_free(b);
	return (0);
}
