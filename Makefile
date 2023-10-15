# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 21:41:25 by nosilves          #+#    #+#              #
#    Updated: 2023/06/09 20:52:24 by nosilves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--------------------------------COLORS-------------------------------#
BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
DEF_COLOR	=	\033[0;39m
GRAY		=	\033[0;90m
RED			=	\033[0;91m
GREEN		=	\033[0;92m
YELLOW		=	\033[0;93m
BLUE		=	\033[0;94m
MAGENTA		=	\033[0;95m
CYAN		=	\033[0;96m
WHITE		=	\033[0;97m

#-------------------------------VARIABLES-----------------------------#

NAME = libft.a
INCLUDE = libft.h
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_atoi.c \
	  ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
	  ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_split.c ft_strmapi.c ft_striteri.c ft_strtrim.c ft_itoa.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

BSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)


#--------------------------IMPLICIT METHODS--------------------------#

$(NAME) : $(OBJ) $(INCLUDE)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(INCLUDE)
	@printf "${YELLOW}\rCompiling (╮°-°)╮┳━┳ ${GREEN} : $<\n" 
	$(CC) $(CFLAGS) -c $< -o $@



#-----------------------------FUNCTIONS-------------------------------#

all: $(NAME)

bonus : $(OBJ) $(BOBJ) $(INCLUDE)
	ar rcs $(NAME) $(OBJ) $(BOBJ)
	touch bonus

clean:
	@echo "${RED}Cleaning... (ノಠ益ಠ)ノ彡┻━┻${GRAY}"
	$(RM) $(OBJ) $(BOBJ) bonus

fclean: clean
	@echo "Cleaning all!!!🧼"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re  
