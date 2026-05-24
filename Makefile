# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/20 04:09:58 by aantela-          #+#    #+#              #
#    Updated: 2026/05/24 19:55:07 by aantela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome da biblioteca 
NAME        = libftprintf.a

# Compilador e Flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs 

# Caminhos e Ficheiros
LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a
SRC         = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c \
			  ft_putptr.c ft_putnbr_uns.c
OBJ         = $(SRC:.c=.o)

# Regras Principais 
all: $(NAME)

# Compila a libft.a e depois cria a libftprintf.a 
$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

# Regra para compilar ficheiros objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regras de Limpeza 
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
