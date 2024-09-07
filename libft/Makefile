#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 13:39:23 by moaljabe          #+#    #+#              #
#    Updated: 2018/08/06 13:57:14 by moaljabe         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra -O3 -c
INCLUDES = -I$(HEADERS_DIRECTORY)

HEADERS_LIST = libft.h
HEADERS_DIRECTORY = ./
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))
SOURCES_DIRECTORY = ./
SOURCES_LIST =	ft_atoi.c\
				ft_bzero.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isblank.c\
				ft_isdigit.c\
				ft_islower.c\
				ft_isprint.c\
				ft_isspace.c\
				ft_isupper.c\
				ft_itoa.c\
				ft_lstadd.c\
				ft_lstaddback.c\
				ft_lstdel.c\
				ft_lstdelone.c\
				ft_lstiter.c\
				ft_lstmap.c\
				ft_lstnew.c\
				ft_memalloc.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memdel.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar.c\
				ft_putchar_fd.c\
				ft_putendl.c\
				ft_putendl_fd.c\
				ft_putnbr.c\
				ft_putnbr_fd.c\
				ft_putstr.c\
				ft_putstr_fd.c\
				ft_strcat.c\
				ft_strchr.c\
				ft_strchrs.c\
				ft_strclr.c\
				ft_strcmp.c\
				ft_strcpy.c\
				ft_strdel.c\
				ft_strdup.c\
				ft_strequ.c\
				ft_striter.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlen.c\
				ft_strlwr.c\
				ft_strmap.c\
				ft_strmapi.c\
				ft_strncat.c\
				ft_strncmp.c\
				ft_strncpy.c\
				ft_strndup.c\
				ft_strnequ.c\
				ft_strnew.c\
				ft_strnlen.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strrev.c\
				ft_strstr.c\
				ft_strsub.c\
				ft_strsubchr.c\
				ft_strtrim.c\
				ft_strupr.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_split.c\
				ft_strlcpy.c\
				ft_substr.c\
				ft_calloc.c\

OBJECTS_DIRECTORY_NAME = obj
OBJECTS_DIRECTORY = $(OBJECTS_DIRECTORY_NAME)/
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS	= $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

ifeq ($(OS),Windows_NT)
    RM = del /Q
    RMDIR_OBJECTS = rmdir /S /Q $(OBJECTS_DIRECTORY_NAME)
    MKDIR = mkdir $(OBJECTS_DIRECTORY_NAME)
else
    RM = rm -f
    RMDIR_OBJECTS = rm -rf $(OBJECTS_DIRECTORY)
    MKDIR = @mkdir -p $(OBJECTS_DIRECTORY)
endif

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS_DIRECTORY) $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(OBJECTS_DIRECTORY):
	$(MKDIR)

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.c $(HEADERS)
	@$(CC) $(FLAGS) $(INCLUDES) $< -o $@

clean:
ifeq ($(OS),Windows_NT)
	@if exist "$(OBJECTS_DIRECTORY)" $(RMDIR_OBJECTS)
else
	@if [ -d "$(OBJECTS_DIRECTORY)" ]; then $(RMDIR_OBJECTS); fi
endif

fclean: clean
ifeq ($(OS),Windows_NT)
	@if exist "$(NAME)" $(RM) $(NAME)
else
	@if [ -f "$(NAME)" ]; then $(RM) "$(NAME)"; fi
endif

re:
	@$(MAKE) fclean
	@$(MAKE) all
