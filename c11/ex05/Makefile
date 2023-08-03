CC = cc
CFLAGS = -Wall -Wextra -Werror
EXEC = do-op
CFILES = ft_atoi.c ft_putnbr.c ops.c resolve_op_to_index.c valid.c check_mod_div_by_0.c main.c
OFILES =  ${CFILES:.c=.o}
HEADERS = ft_atoi.h ft_putnbr.h ops.h resolve_op_to_index.h valid.h check_mod_div_by_0.h

.PHONY: all clean fclean re

all: ${EXEC}

${EXEC}: ${OFILES}
	@${CC} ${CFLAGS} -o ${EXEC} ${OFILES}

%.o: %.c ${HEADERS}
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@rm -f ${OFILES}

fclean: clean
	@rm -f ${EXEC}

re: fclean all