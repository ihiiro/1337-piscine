SRCS = srcs/
INCLUDES = ./
CFILES = srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ops.c srcs/resolve_op_to_index.c srcs/valid.c srcs/check_mod_div_by_0.c srcs/main.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
OFILES =  srcs/ft_atoi.o srcs/ft_putnbr.o srcs/ops.o srcs/resolve_op_to_index.o srcs/valid.o srcs/check_mod_div_by_0.o srcs/main.o
EXEC = do-op

all: ${EXEC}

${EXEC}: ${OFILES}
	@${CC} ${CFLAGS} ${OFILES} -o ${EXEC}

srcs/%.o: srcs/%.c
	@${CC} ${CFLAGS} -c -I ${INCLUDES} $< -o $@

clean:
	@rm -f ${OFILES}

fclean: clean
	@rm -f ${EXEC}

re: fclean all