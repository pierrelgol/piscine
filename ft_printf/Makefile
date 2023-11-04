# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 17:46:51 by Plgol             #+#    #+#              #
#    Updated: 2023/07/16 17:46:54 by Plgol            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = cc
CFLAGS = -Wall -Wextra -Werror -O3
LDFLAGS = -shared

SRC    = ft_printf.c			\
		 ft_fsm.c 				\
		 ft_putnbr_base.c 		\
		 ft_print_fmt_i32.c 	\
		 ft_print_fmt_u32.c		\
		 ft_print_fmt_i8.c		\
		 ft_print_fmt_str.c		\
		 ft_print_fmt_ptr.c		\
		 ft_print_fmt_lhex.c	\
		 ft_print_fmt_uhex.c	\

OBJDIR = obj
OBJS   = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

LIB    = ft_printf.h
STATIC_NAME = libftprintf.a
SHARED_NAME = libftprintf.so

.PHONY: all clean fclean re

all: $(STATIC_NAME) $(SHARED_NAME)

$(STATIC_NAME): $(OBJS)
	ar rcs $(STATIC_NAME) $(OBJS)

$(SHARED_NAME): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(SHARED_NAME)

$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(STATIC_NAME) $(SHARED_NAME)

re: fclean all
