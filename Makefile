NAME = pushswap.a
CC = cc
GFLAGS = -Wall -Werror -Wextra
AR = ar rcs
SRC = ft_atoi \
	ft_bzero \
	ft_calloc \
	ft_isalpha \
	ft_isdigit \
	ft_lstadd_back \
	ft_lstadd_front \
	ft_lstiter \
	ft_lstlast \
	ft_lstnew \
	ft_split \
	ft_strlen \
	ft_substr \

# add only file from libft
# need to check path to folder libft

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re 