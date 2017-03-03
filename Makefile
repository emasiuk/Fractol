NAME = fractol

FLAGS = -03 -Wall -Wextra -Werror

MLX = -lmlx -framework OpenGL -framework AppKit

LIB = libft/libft.a

SRC =	main.c				\
		mandelbrot.c		\
		key_funct.c			\
		julia.c				\
		ft_image.c			\
		burning_ship.c

BINS = $(SRC:.c = .o)

all: $(NAME)

makelib:
	make -C libft/
libclean:
	make -C linft/ clean

libfclean:
	make -C libft/ fclean

$(NAME): $(BINS) makelib
	gcc -o $(NAME) $(BINS) $(FLAGS) $(MLX) $(LIB)

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

clean: libfclean
	/bin/rm -f $(BINS)

fclean: libclean clean
	/bin/rm -f $(NAME)

re: fclean all
