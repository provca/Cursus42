# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: provira- <provira-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 09:29:01 by provira-          #+#    #+#              #
#    Updated: 2023/10/13 10:14:32 by provira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile Version 1.1.4

# Program name
NAME			:= libft.a

# Source files
CURRENT_FILES	:= ft_isalpha.c ft_memchr.c  ft_putchar_fd.c ft_strchr.c  ft_strlcpy.c \
				   ft_strrchr.c ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c \
				   ft_strlen.c ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c \
				   ft_striteri.c ft_strmapi.c ft_substr.c ft_calloc.c ft_isprint.c ft_memmove.c \
				   ft_putstr_fd.c  ft_strjoin.c  ft_strncmp.c ft_tolower.c ft_isalnum.c ft_itoa.c \
				   ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c

BONUS_FILES		:= ft_lstadd_back.c   ft_lstclear.c   ft_lstiter.c  ft_lstmap.c ft_lstsize.c \
				   ft_lstadd_front.c  ft_lstdelone.c  ft_lstlast.c  ft_lstnew.c

OBJECTS			:= $(CURRENT_FILES:.c=.o)
BONUS			:= $(BONUS_FILES:.c=.o)

# Include header
# INCLUDE_DIR		:= ./
# INCLUDE			:= $(INCLUDE_DIR)libft.h
INCLUDE			:= libft.h

# Compiler
GCC				:= gcc
GCC_FLAGS		:= -Wall -Wextra -Werror

# Console
AR				:= ar
AR_FLAGS		:= -crs

RM				:= rm
RM_FLAGS		:= -rf

# pattern vars
# %.o: %.c $(INCLUDE) Makefile\
	$(GCC) $(GCC_FLAGS) -o $@ -c $< -I$(INCLUDE_DIR)

%.o: %.c $(INCLUDE) Makefile
	$(GCC) $(GCC_FLAGS) -c -o $@ $< 

# Rules
all: $(NAME)

$(NAME): $(OBJECTS) $(BONUS)
	$(AR) $(AR_FLAGS) $@ $?

bonus: $(OBJECTS) $(BONUS)
	$(AR) $(AR_FLAGS) $(NAME) $?

clean:
	$(RM) $(RM_FLAGS) $(OBJECTS) $(BONUS)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
