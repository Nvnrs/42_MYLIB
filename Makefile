# %***					***% 
#		LIBFT_CUSTOM 

SRC_LIBFT_CUSTOM = ./libft_custom/cft_dec_to_hex.c \
	./libft_custom/cft_length_nbr.c \
	./libft_custom/cft_putnbr_ui_fd.c \
	./libft_custom/ft_strcpy.c \
	./libft_custom/cft_strcat_realloc.c \
	./libft_custom/str_contain_c.c \
	./libft_custom/str_contain_only_charset.c \

# %***					***% 
#		FT_PRINTF 

SRC_FT_PRINTF = ./ft_printf/treats_char.c \
	./ft_printf/treats_integer.c \
	./ft_printf/format.c \
	./ft_printf/ft_printf.c

# %***					***% 
#		GNL

SRC_GNL = ./gnl/get_next_line_utils_bonus.c \
	./gnl/get_next_line_bonus.c

# %***					***% 
#		LIBFT 

SRC_LIBFT = ./libft/ft_isalpha.c \
	./libft/ft_isdigit.c \
	./libft/ft_isalnum.c \
	./libft/ft_isascii.c \
	./libft/ft_isprint.c \
	./libft/ft_strlen.c \
	./libft/ft_memset.c \
	./libft/ft_bzero.c \
	./libft/ft_memcpy.c \
	./libft/ft_memmove.c \
	./libft/ft_strlcpy.c \
	./libft/ft_strlcat.c \
	./libft/ft_toupper.c \
	./libft/ft_tolower.c \
	./libft/ft_strchr.c \
	./libft/ft_strrchr.c \
	./libft/ft_strncmp.c \
	./libft/ft_memchr.c \
	./libft/ft_memcmp.c \
	./libft/ft_strnstr.c \
	./libft/ft_atoi.c \
	./libft/ft_calloc.c \
	./libft/ft_strdup.c \
	./libft/ft_substr.c \
	./libft/ft_strjoin.c \
	./libft/ft_strtrim.c \
	./libft/ft_split.c \
	./libft/ft_itoa.c \
	./libft/ft_strmapi.c \
	./libft/ft_striteri.c \
	./libft/ft_putchar_fd.c \
	./libft/ft_putstr_fd.c \
	./libft/ft_putendl_fd.c \
	./libft/ft_putnbr_fd.c

SRC_LIBFT_BONUS = ./libft/ft_lstadd_front_bonus.c \
	./libft/ft_lstnew_bonus.c \
	./libft/ft_lstsize_bonus.c \
	./libft/ft_lstlast_bonus.c \
	./libft/ft_lstadd_back_bonus.c \
	./libft/ft_lstdelone_bonus.c \
	./libft/ft_lstclear_bonus.c \
	./libft/ft_lstiter_bonus.c \
	./libft/ft_lstmap_bonus.c



SRC = $(SRC_LIBFT_BONUS) $(SRC_LIBFT_CUSTOM) $(SRC_FT_PRINTF) $(SRC_GNL) $(SRC_LIBFT)


OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = mylib42.a


all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean re fclean all
