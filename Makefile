NAME = morse.a
FT_PRINTF = ft_printf/
FLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=32#-g
HEADER = morse.h

SRCS = init_alpha.c \
		parce_line.c \
		parse_morse_letter.c \
		validity.c \
		alpha_to_morse.c \
		print_morse.c \
		morse.c \
		get_next_line/get_next_line.c \
		get_next_line/get_next_line_utils.c \

OBJS = $(SRCS:.c=.o)

.PHONY: all, clean, fclean, re, bonus, main, mainclean

all:	$(NAME)

$(NAME): $(OBJS)
		@make -C $(FT_PRINTF)
		@cp ft_printf/libftprintf.a ./$(NAME)
		@ar rcs $(NAME) $(OBJS)
		@echo "Morse compiled"

%.o: %.c
		@gcc $(FLAGS) -I $(HEADER) -c $< -o $@

main:	all
		@gcc main.c morse.a -o morse -I morse.h $(FLAGS)
		@echo "Morse with main compiled"
		@make clean

mainclean:
			@/bin/rm -f main.o
			@/bin/rm -f a.out

clean:
		@make clean -C $(FT_PRINTF)
		@/bin/rm -f $(OBJS)
		@echo "Morse cleaned"

fclean:	clean mainclean
		@/bin/rm -f $(NAME)
		@echo "Morse full cleaned"

re:		fclean all