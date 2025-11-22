/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:45:32 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 22:17:42 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>

# include "../libft/includes/libft.h"
# include "../libft/includes/libft_bonus.h"
# include "../libft/includes/ft_printf.h"

# define TRUE 1
# define FALSE 0

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
long	*get_arg_into_arr(char **args, size_t size);
void	sort_arr(long *arr, size_t size);

/*stack*/
t_stack	*stack_create(long *arr, size_t size);
t_stack	*stack_movehead(t_stack *stack, size_t len, void (*f)(t_stack*));
void	stack_free(t_stack *stack);

/*node*/
t_node	*nodenew(int value);
t_stack	*nodeadd(t_stack *stack, t_node *new);
t_stack	*nodecut(t_stack *stack);

/*check*/
int		is_sign(char c);
int		is_number(char *str);
int		is_integer_int(char *str);
int		is_arr_unique(long *arr, size_t size);
int		is_sorted(t_stack *stack);

/*error handle*/
void	err_input(void);
void	err_malloc(void);

/*process*/
void	push_swap(t_stack *a, t_stack *b);

/*sort*/
void	sort_short(t_stack *a, t_stack *b);
void	sort_long(t_stack *a, t_stack *b);
void	sort_radix(t_stack *a, t_stack *b);
size_t	getlen_tomin(t_stack *stack);

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
