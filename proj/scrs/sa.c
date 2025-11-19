
typedef struct s_stk
{
	void			*value;
	struct s_stk	*prev;
	struct s_stk	*next;
} t_stk;

void	sa(t_stk **stack)
{
	t_stk	*node0;
	t_stk	*node1;
	t_stk	*node$;

	node0 = *stack;
	node1 = *(stack)->next;
	node$ = *(stack)->prev;
	

}
