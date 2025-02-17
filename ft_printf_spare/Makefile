NAME := libftprintf.a

CC := cc
CFLAGS := -Wall -Wextra -Werror

SOURCES :=     format_check.c  \
				ft_itoa_base.c \
				ft_printf.c    \
				ft_putchar.c   \
				ft_putptr.c    \
				ft_putstr.c    \
				ft_strdup.c    \
				ft_strjoin.c   \
				ft_strlcat.c   \
				ft_strlen.c    \


OBJECTS    :=    $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):	$(OBJECTS)
	ar	rcs	$(NAME)	$(OBJECTS)

%.o:	%.c
	$(CC)	$(CFLAGS)	-c	$<	-o	$@

clean:
	rm	-f	$(OBJECTS)

fclean:	clean
	rm	-f	$(NAME)

re:    fclean    all

.PHONY:    all    clean    fclean    re
