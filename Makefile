CC = clang
CFLAGS = -Wall -Wextra -Werror -I $(LIBFT_DIR) -I ./includes
LDFLAGS = -L$(LIBFT_DIR) -lft -lm

LIBFT_DIR = ./libft/

LIBFT = ${LIBFT_DIR}libft.a

HEADER_FILE = ./headers/xp_calc.h

SRCS_M = srcs/xp_calc.c


M_OBJS = $(SRCS_M:.c=.o)

OBJS = $(M_OBJS)
HEADER =$(HEADER_FILE)

NAME = xp_calculator

all: $(NAME)

${LIBFT}:
	@${MAKE} -C libft

$(NAME): $(OBJS) $(MLX) $(LIBFT)
	@$(CC) -o $@ ${OBJS} ${CFLAGS} $(LDFLAGS)

%.o: %.c $(HEADER_FILE)
	$(CC) -o $@ -c $< $(CFLAGS)
	
clean:
	${MAKE} -C libft clean
	rm -f $(M_OBJS)

fclean: clean
	rm -f $(NAME) ${LIBFT}

re: fclean all

.PHONY: clean fclean all re
