# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 01:34:35 by sel-kham          #+#    #+#              #
#    Updated: 2022/10/24 18:58:04 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS
RED := \033[0;31m
WHITE := \033[0;37m
GREEN := \033[0;32m
BLUE := \033[0;34m

# Helpers Variables
REMOVE := rm -rf

# Flags
CFLAGS := -Wall -Wextra -Werror
MATH_FLAGS := -lm
MLX_EFLAGS := -Lmlx -lmlx -framework OpenGL -framework AppKit
MLX_OFLAGS := -Imlx

# Parts
MANDATORY_DIR := mandatory
BONUS_DIR := bonus
LIBS_DIR := libs

# Directories
SRC_DIR := src
OBJ_DIR := obj
INC_DIR := includes

# Subdirectories
MLX_DIR := $(LIBS)/mlx
LIBFT_DIR := $(LIBS)/libft
HEADERS_DIR := $(SRC_DIR)/headers
HELPERS_DIR := $(SRC_DIR)/helpers

# Includes
## Headers
HEADERS := cub3d macros types
HEADERS := $(addprefix $(HEADERS_DIR)/, $(addsuffix .h, $(HEADERS)))
## Libft
LIBFT := $(LIBFT_DIR)/libft.a
## MLX Lib
MLX := $(MLX_DIR)/libmlx.a

# Source files
MAIN := $(SRC_DIR)/main.c
## Helpers
HELPERS := memory_handlers
HELPERS := $(addprefix $(HELPERS_DIR)/, $(addsuffix .c, $(HELPERS)))

# Compilation reqirements
SRC := $(HELPERS)
OBJ := $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

# Base code for the Makefile
.PHONY: all clean fclean re

NAME := cub3D

BONUS := cub3D_bonus

all: $(NAME)

$(NAME): $(MAIN) $(HEADERS) $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(MLX_EFLAGS) $(MAIN) $(OBJ) $(LIBFT) -o $(NAME)

# !!!!!! ADD $(MATH_FLAGS) TO COMPULATION !!!!!!
$(OBJ_DIR)/%.o: $(HELPERS_DIR)/%.c $(HEADERS) $(LIBFT)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(MLX_OFLAGS) -c $< -o $@

$(LIBFT): $(shell find $(LIBFT_DIR) -name "*.c" -type f)
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	$(REMOVE) $(OBJ_DIR)
	$(MAKE) -C $(MLX_DIR)/ clean
	$(MAKE) -C $(LIBFT_DIR)/ clean

fclean: clean
	$(REMOVE) $(NAME)
	$(MAKE) -C $(LIBFT_DIR)/ fclean

re: fclean all