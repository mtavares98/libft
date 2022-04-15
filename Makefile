# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 17:42:50 by mtavares          #+#    #+#              #
#    Updated: 2022/04/15 11:41:12 by mtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c \
					ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

SRCS_B			=	ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
					ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
			
NAME			=	libft.a

OBJS			=	$(SRCS:.c=.o)

OBJS_B			=	$(SRCS_B:.c=.o)

CC 				=	clang

CFLAGS			=	-Wall -Werror -Wextra -I.

all:		$(NAME)

$(NAME): 	$(OBJS)
				ar rcs $(NAME) $(OBJS)

bonus:		$(NAME) $(OBJS_B)
				ar rcs $(NAME) $(OBJS_B)

clean:
				rm -f $(OBJS)

fclean: 	clean
				rm -f $(NAME)

re:			fclean all

re:			fclean bonus	

.PHONY: all clean fclean re bonus rebonus