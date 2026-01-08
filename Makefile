# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqian <zqian@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/08 10:39:26 by zqian             #+#    #+#              #
#    Updated: 2026/01/08 10:39:28 by zqian            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

INC_DIR = includes
SRC_DIR = sources
OBJ_DIR = objs

# Core files
CORE_SRCS = core/main.c core/error.c

# Parsing files
PARSING_SRCS = parsing/parsing.c

# Utils files
UTILS_SRCS = utils/stack_operations.c

SRCS = $(addprefix $(SRC_DIR)/, $(CORE_SRCS) $(PARSING_SRCS) $(UTILS_SRCS))

OBJS = $(foreach src,$(SRCS),$(OBJ_DIR)/$(notdir $(src:.c=.o)))
DEPS = $(OBJS:.o=.d)

vpath %.c $(SRC_DIR)/core $(SRC_DIR)/parsing $(SRC_DIR)/utils

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: %.c $(INC_DIR)/push_swap.h
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
