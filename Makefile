NAME		= libftprintf.a

SRCS		= ft_printf.c funcsprint.c for_form.c

OBJS		= $(SRCS:.c=.o)

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

AR			= ar -rcs

RM			= rm -rf

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
