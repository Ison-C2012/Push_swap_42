NAME	:=	push_swap

INCDIR	:=	includes
SRCDIR	:=	srcs
OBJDIR	:=	objs
ARCDIR	:=	libft

SRCS	:=	check_param.c \
			main.c \
			push_swap.c
OBJS	:=	$(SRCS:%.c=$(OBJDIR)/%.o)
ARCS	:=	libft.a

CC		:=	cc
CFLAGS	:=	-Wall -Wextra -Werror
MKDIR	:=	mkdir -p

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(ARCDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) $(OBJS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $<  $(ARCDIR)/$(ARCS) -o $@

clean: 
	@make -C $(ARCDIR) clean
	rm -rf $(OBJDIR)

fclean: clean
	@make -C $(ARCDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
