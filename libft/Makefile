NAME = libft.a

CC = gcc

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_memset.c     \
	ft_bzero.c      \
	ft_memcpy.c     \
	ft_memmove.c    \
	ft_memchr.c     \
	ft_memcmp.c     \
	ft_strlen.c     \
	ft_isalpha.c    \
	ft_isdigit.c    \
	ft_isalnum.c    \
	ft_isascii.c    \
	ft_isprint.c    \
	ft_toupper.c    \
	ft_tolower.c    \
	ft_strchr.c     \
	ft_strrchr.c    \
	ft_strlcpy.c    \
	ft_strlcat.c    \
	ft_strnstr.c    \
	ft_atoi.c       \
	ft_calloc.c     \
	ft_strncmp.c    \
	ft_strdup.c     \
	ft_substr.c     \
	ft_strjoin.c    \
	ft_strtrim.c    \
	ft_split.c      \
	ft_itoa.c       \
	ft_strmapi.c    \
	ft_striteri.c   \
	ft_putchar_fd.c \
	ft_putstr_fd.c  \
	ft_putendl_fd.c \
	ft_putnbr_fd.c  \

SRCB =  ft_lstnew.c		\
	ft_lstadd_front.c	\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstadd_back.c	\
	ft_lstiter.c		\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstmap.c			\


OBJECTS = $(SRC:.c=.o)
OBJECTSB = $(SRCB:.c=.o)

INCLUDES = libft.h \

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -o $@ -c $<

bonus: $(NAME) $(OBJECTSB)
	$(AR) $^

clean:
	rm -rf $(OBJECTS) $(OBJECTSB)

fclean: clean
	rm -rf $(NAME)

re: fclean all