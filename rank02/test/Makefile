NAME := push_swap

CC := cc
CFLAGS := -Wall -Wextra -Werror

LIBFT_DIR		:= ./library/libft
FT_PRINTF_DIR 	:= ./library/ft_printf

LIBFT			:= ${LIBFT_DIR}/libft.a
FT_PRINTF		:= ${FT_PRINTF_DIR}/libftprintf.a

INCLUDE 		:= -I ${LIBFT_DIR} -I ${FT_PRINTF_DIR} -I ./includes/

MAIN			:= ./srcs/main

PARSING			:= ./srcs/parsing

STACKS			:= ./srcs/stacks

OPERATIONS		:= ./srcs/operations

EXECUTIONS		:= ./srcs/executions

MAIN_C			:= main.c \
				   util.c \

PARSING_C 		:=  arr_length.c \
					get_arr.c \
					get_num_list.c \
					is_duplicate.c \
					is_int.c \
					numbers_parsing.c \
					sort_arr.c \
					compare.c \

STACKS_C		:=	push_stacks.c \

OPERATIONS_C	:=	swap.c \
					push.c \
					rotate.c \
					rev_rotate.c \

EXECUTIONS_C	:=	sort3.c \
					a2b.c \
					b2a.c \

SRCS			:= 	$(addprefix ${MAIN}/, ${MAIN_C})		\
					$(addprefix ${PARSING}/, ${PARSING_C})	\
					$(addprefix ${STACKS}/, ${STACKS_C})	\
					$(addprefix ${OPERATIONS}/, ${OPERATIONS_C}) \
					$(addprefix ${EXECUTIONS}/, ${EXECUTIONS_C}) \

OBJS				:= ${SRCS:.c=.o}


all: ${LIBFT} ${FT_PRINTF} ${NAME}

%.o:	%.c
	${CC}	${CFLAGS}	-o $@ -c $< ${INCLUDE}

${NAME}:	${OBJS} ${LIBFT} ${FT_PRINTF}
			@cc ${OBJS} ${LIBFT} ${FT_PRINTF} -o ${NAME}


${LIBFT}:
		@$(MAKE) -C ${LIBFT_DIR}

${FT_PRINTF}:
		@$(MAKE) -C ${FT_PRINTF_DIR}

clean:
	rm	-f	$(OBJS)
	@$(MAKE) -C ${LIBFT_DIR} clean
	@$(MAKE) -C ${FT_PRINTF_DIR} clean


fclean:
	rm	-f	${NAME} ${OBJS}
	@$(MAKE) -C ${LIBFT_DIR} fclean
	@$(MAKE) -C ${FT_PRINTF_DIR} fclean

re:    fclean    all

.PHONY:    all    clean    fclean    re
