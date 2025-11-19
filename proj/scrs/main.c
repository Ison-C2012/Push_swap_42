/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:14:54 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 00:29:06 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

# define NO_PARAM 1
# define INVALID_PARAM 1

/*main func checks its parameters and pass them to push_swap func.*/

int	main(int argc, char *argv[])
{
	if (argc == NO_PARAM)
		return (0);
	if (check_param(argc - 1, &argv[1]))
		return (INVALID_PARAM);
	push_swap(argc - 1, &argv[1]);
	return (0);
}
