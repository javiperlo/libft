# Nombre del programa resultante
TARGET = libft.a

# Compilador
CC = gcc

# Opciones de compilación
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRCS = mains.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_isascii.c ft_memmove.c ft_strdup.c

# Objetos generados a partir de los archivos fuente
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
