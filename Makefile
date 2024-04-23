NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

AR = ar -rcs

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_isspace.c ft_sqrt.c \
ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJS = $(SRC:.c=.o)

SRC_PRINTF = printf/ft_printf.c printf/letters.c printf/numbers.c

O_PRINTF = $(SRC_PRINTF:.c=.o)

SRC_GNL = gnl/get_next_line_bonus.c gnl/get_next_line_utils_bonus.c

O_GNL = $(SRC_GNL:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(O_PRINTF) $(O_GNL)
	@$(AR) $(NAME) $(OBJS) $(O_PRINTF) $(O_GNL)
	@echo "Compiled LIBFT successfully."

$(OBJS): %.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(O_PRINTF): %.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(O_GNL): %.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(O_BNS) $(O_PRINTF) $(O_GNL)

fclean: clean
	@$(RM) $(NAME) 

re:	fclean all

.PHONY: all clean fclean re
