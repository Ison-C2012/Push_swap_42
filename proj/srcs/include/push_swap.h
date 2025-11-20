/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:45:32 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 20:09:58 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>
#include <stdio.h>

# include "libft.h"
# include "libft_bonus.h"
# include "ft_printf.h"

/*main file*/

/*check_param file*/


typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
} t_node;

typedef struct s_stack
{
	t_node	*head;
	size_t	size;
} t_stack;

/*stack*/
t_stack	*stack_create(char **param, size_t size);
void	stack_print(t_stack *a, t_stack *b);

/*node*/
t_node	*nodenew(int value);
t_stack	*nodeadd(t_stack *stack, t_node *new);
t_stack	*nodecut(t_stack *stack);

/*process*/
void	push_swap(t_stack *a, t_stack *b);

/*check*/
int		check_param(size_t cnt, char *param[]);

/*sort*/
void	sort_two(t_stack *stack);
void	sort_three_asc(t_stack *stack);
void	sort_three_dec(t_stack *stack);
void	sort_ufive(t_stack *a, t_stack *b);

/*operate*/
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *b, t_stack *a);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

/*print*/
void	print_sa(void);
void	print_sb(void);
void	print_ss(void);
void	print_pa(void);
void	print_pb(void);
void	print_ra(void);
void	print_rb(void);
void	print_rr(void);
void	print_rra(void);
void	print_rrb(void);
void	print_rrr(void);

#endif
