/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:45:32 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 19:22:07 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>

# include "libft.h"
# include "libft_bonus.h"
# include "ft_printf.h"

#define TRUE 1
#define FALSE 0

typedef struct s_node
{
	int				value;
	unsigned int	index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	size_t	size;
}	t_stack;

/*array*/
void	get_arg_into_arr(long *arr, char **args, size_t size);

/*check*/
int		is_sign(char c);
int		is_number(char *str);
int		is_integer_int(char *str);
void	error(void);

/*stack*/
t_stack	*stack_create(long *arr, size_t size);
t_stack	*stack_movehead(t_stack *stack, size_t len, void (*f)(t_stack*));
void	stack_free(t_stack *stack);

/*node*/
t_node	*nodenew(int value);
t_stack	*nodeadd(t_stack *stack, t_node *new);
t_stack	*nodecut(t_stack *stack);
void	node_setindex(t_stack *stack);

/*process*/
void	push_swap(t_stack *a, t_stack *b);

/*sort*/
void	sort_two_asc_a(t_stack *a);
void	sort_two_dsc_b(t_stack *b);
void	sort_three_asc_a(t_stack *a);
void	sort_ufive(t_stack *a, t_stack *b);
void	sort_long(t_stack *a, t_stack *b);
void	sort_arr(long *arr, size_t size);
int		is_sorted(t_stack *stack);
size_t	getlen_tomin(t_stack *stack);
long	*get_arr(long *arr, t_node *node, size_t size);
unsigned int	get_index(long *arr, int value, size_t size);

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
void	print_stack(t_stack *a, t_stack *b);
void	print_stack_index(t_stack *stack);

#endif
