/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:41:28 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:50 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

# define TRUE 0
# define FALSE 1

int	check_param(size_t cnt, char **param);
static int	is_nbr(char *str);
static int	is_exist(char **param, size_t index);

/*You must delete this function when you submit your project.
 This function is used only to detect error for test.*/
/*int	ed(int err, char c)
{
	printf("%c\n", c);
	return (err);
}*/

/* ************************************************************************** */
int	check_param(size_t cnt, char **param)
{
	size_t	i;

	i = 0;
	while (i < cnt)
	{
		if (is_nbr(param[i]))
			return (FALSE);
		if (is_exist(param, i))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

/* ************************************************************************** */
static int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}


/* ************************************************************************** */
static int	is_nbr(char *str)
{
	int	sign;

	sign = 0;
	while (*str)
	{
		if (ft_issign(*str))
		{
			sign++;
			str++;
		}
		if (ft_isdigit(*str) == 0 && sign < 2)
			return (FALSE);
		str++;
	}
	return (TRUE);
}

/* ************************************************************************** */
static int	is_exist(char **param, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		if (ft_strncmp(param[i], param[index], ft_strlen(param[i])) == 0)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

