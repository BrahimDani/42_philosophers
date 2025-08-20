# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brdani <brdani@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 00:20:18 by brdani            #+#    #+#              #
#    Updated: 2025/07/26 00:26:43 by brdani           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	:= philo

SRC_DIR	:= src
OBJ_DIR	:= obj

CC		:= cc
CFLAGS	:= -Wextra -Wall -Werror

INCLUDE	:= -I ./include

SRC		:= main.c 					\
OBJ		:= $(SRC:%.c=$(OBJ_DIR)/%.o)

GREEN	:= \033[1;32m
NC		:= \033[0m

LIB 	:= make -sC mlx
LIB.A	:= mlx/libmlx_Linux.a

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJ)
	@$(LIB)
	@$(CC) $(OBJ) $(LIB.A) -lXext -lX11 -lm -lz -o $(NAME) && printf "$(GREEN)✔️ $(NAME)$(NC) compiled\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCLUDE) && printf "$(GREEN)✔️ $(notdir $<)$(NC) compiled\n"

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "\033[0;31mDeleting so_long executable..."
	@rm -f $(NAME)
	@make clean -sC $(MLX_PATH)
	@echo "\033[1;32mDone\n"

re: clean all

.PHONY: all clean fclean re
