# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 16:10:01 by mtalbi            #+#    #+#              #
#    Updated: 2023/12/03 17:35:19 by mtalbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

sources = ft_bzero.c ft_isalpha.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_strlen.c ft_substr.c ft_strtrim.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_itoa.c ft_strjoin.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

objs = $(sources:.c=.o) 

bns = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

bonus_obj = $(bns:.c=.o)

all: $(NAME)

%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(objs)
	ar -rc $(NAME) $(objs)
	
bonus: $(bonus_obj)
	ar -rc $(NAME) $(bonus_obj)
	
clean:
	rm -rf $(objs) $(bonus_obj)
	
fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY : clean