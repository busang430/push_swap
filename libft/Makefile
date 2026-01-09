NAME=libft.a
BONUS_DONE = .bonus_done
SRC = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c 

BONUS_SRC = \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJ 		= $(SRC:.c=.o)
BONUS_OBJ 	= $(BONUS_SRC:.c=.o)
O_FILES_ALL = $(OBJ) $(BONUS_OBJ)
D_FILES 	= $(O_FILES_ALL:.o=.d)

CFLAGS = -Wall -Wextra -Werror -MMD -MP
CC = cc $(CFLAGS)
RM = rm -rf

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

bonus: $(BONUS_DONE)

$(BONUS_DONE): $(O_FILES_ALL)
	ar -rcs $(NAME) $(O_FILES_ALL)
	touch $(BONUS_DONE)

%.o : %.c
	$(CC) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(O_FILES_ALL) $(BONUS_DONE) $(D_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(D_FILES)