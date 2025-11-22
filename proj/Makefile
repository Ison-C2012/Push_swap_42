NAME	:=	push_swap

INCDIR	:=	includes
SRCDIR	:=	srcs
OBJDIR	:=	objs
ARCDIR	:=	libft

SRCS	:=	main/main.c \
			parts/array.c \
			parts/stack.c \
			parts/node.c \
			check/check.c \
			error/err_hdl.c \
			process/push_swap.c \
			sort/sort_short.c \
			sort/sort_long.c \
			sort/sort_radix.c \
			sort/sort_helper.c \
			operate/push.c \
			operate/swap.c \
			operate/rotate.c \
			operate/rev_rotate.c \
			print/print_push.c \
			print/print_swap.c \
			print/print_rotate.c \
			print/print_rrotate.c \
			print/print_stack.c
OBJS	:=	$(SRCS:%.c=$(OBJDIR)/%.o)
ARCS	:=	libft.a

CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror 
#CFLAGS	:=	-Wall -Wextra -Werror -g3
#CFLAGS	:=	-Wall -Wextra -Werror -g3 -fsanitize=address
MKDIR	:=	mkdir -p

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(ARCDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) $(OBJS)  $(ARCDIR)/$(ARCS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $<  -o $@

clean: 
	@make -C $(ARCDIR) clean
	rm -rf $(OBJDIR)

fclean: clean
	@make -C $(ARCDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
