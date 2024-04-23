NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_isspace.c ft_sqrt.c \

BNS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstiter_bonus.c ft_lstmap_bonus.c \

SRC_PRINTF = printf/ft_printf.c printf/letters.c printf/numbers.c

O_PRINTF = $(SRC_PRINTF:.c=.o)

O_BNS = $(BNS:.c=.o)

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) 
	@ar -rcs $(NAME) $(OBJS)

bonus: $(O_BNS) $(OBJS) $(O_PRINTF)
	@ar -rcs $(NAME) $(O_BNS) $(OBJS) $(O_PRINTF)

clean:
	@$(RM) $(OBJS) $(O_BNS) $(O_PRINTF)

fclean: clean
	@$(RM) $(NAME) 

re:	fclean all

.PHONY: all clean fclean re
