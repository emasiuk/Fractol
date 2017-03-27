NAME = fractol

FLAGS = -Wall -Wextra -Werror -g -O3

MLX = -lmlx -framework OpenGL -framework AppKit

LIB = libft/libft.a

SRCS =	main.c				\
		mandelbrot.c		\
		key_funct.c			\
		julia.c				\
		ft_image.c			\
		burning_ship.c		\
		my_fract.c			\
		string.c			\
		shift.c				\
		zoom.c

BINS = $(SRCS:.c=.o)

all: $(NAME)

makelib:
	make -C libft/

libclean:
	make -C libft/ clean

libfclean:
	make -C libft/ fclean

$(NAME): $(BINS) makelib
	gcc -o $(NAME) $(BINS) $(FLAGS) $(MLX) $(LIB)

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

clean: libclean
	/bin/rm -f $(BINS)

fclean: libfclean clean
	/bin/rm -f $(NAME)

re: fclean all
