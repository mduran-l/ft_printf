# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mduran-l <mduran-l@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 12:36:32 by mduran-l          #+#    #+#              #
#    Updated: 2024/01/09 12:26:24 by mduran-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#https://medium.com/@Anatolii_Zhadan/makefile-to-create-a-library-in-c-3c2ad3d281
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDR = ft_printf.h
SRCS = ft_printf.c
# SRCS_BONUS = 
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

.PHONY: all clean fclean re bonus libft
all: $(NAME) bonus

# Avoid relink
# https://stackoverflow.com/questions/42718392/how-to-avoid-my-makefile-to-relink
%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HDR) libft
	@$(AR) rcs $(NAME) $(OBJS)

# bonus: $(OBJS) $(OBJS_BONUS) $(HDR)
#	@$(AR) rcs $(NAME) $(OBJS) $(OBJS_BONUS)

fclean: clean
	@$(RM) -f $(NAME)

clean:
	cd libft && $(MAKE) clean
	@$(RM) -f $(OBJS) $(OBJS_BONUS)

libft:
	cd libft && $(MAKE) all clean

re: fclean all
