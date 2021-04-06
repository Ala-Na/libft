NAME = libft.a

CC = gcc

SRC = ./srcs/ft_atoi.c ./srcs/ft_bzero.c ./srcs/ft_calloc.c \
./srcs/ft_isalnum.c ./srcs/ft_isalpha.c ./srcs/ft_isascii.c \
./srcs/ft_isdigit.c ./srcs/ft_isprint.c ./srcs/ft_itoa.c \
./srcs/ft_memccpy.c ./srcs/ft_memchr.c ./srcs/ft_memcmp.c \
./srcs/ft_memcpy.c ./srcs/ft_memmove.c ./srcs/ft_memset.c \
./srcs/ft_putchar_fd.c ./srcs/ft_putendl_fd.c \
./srcs/ft_putnbr_fd.c ./srcs/ft_putstr_fd.c ./srcs/ft_split.c \
./srcs/ft_strchr.c ./srcs/ft_strdup.c ./srcs/ft_strjoin.c \
./srcs/ft_strlcat.c ./srcs/ft_strlcpy.c ./srcs/ft_strlen.c \
./srcs/ft_strmapi.c ./srcs/ft_strncmp.c ./srcs/ft_strnstr.c \
./srcs/ft_strrchr.c ./srcs/ft_strtrim.c ./srcs/ft_substr.c \
./srcs/ft_tolower.c  ./srcs/ft_toupper.c

SRC_BONUS = ./srcs/ft_lstadd_back.c  ./srcs/ft_lstadd_front.c \
./srcs/ft_lstclear.c ./srcs/ft_lstdelone.c ./srcs/ft_lstiter.c \
./srcs/ft_lstlast.c ./srcs/ft_lstmap.c ./srcs/ft_lstnew.c \
./srcs/ft_lstsize.c ./srcs/ft_strtrim_ult.c \
./srcs/get_next_line_bonus.c ./srcs/get_next_line_utils_bonus.c

HEADER = includes

CFLAGS = -Wall -Wextra -Werror -I $(HEADER)

OBJ= $(SRC:.c=.o)

OBJ_BONUS= $(SRC_BONUS:.c=.o)

.c.o :
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(HEADER)

all :		$(NAME)

$(NAME) :	$(OBJ)
		ar rcs $(NAME) $(OBJ)

bonus :		$(OBJ) $(OBJ_BONUS)
		ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean :
		rm -f $(OBJ) $(OBJ_BONUS)

fclean :	clean
		rm -f $(NAME)

re :		fclean all


.PHONY: $(NAME) bonus all clean fclean re
