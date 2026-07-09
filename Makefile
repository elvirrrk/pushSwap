NAME = pushswap.a
CC = cc
GFLAGS = -Wall -Werror -Wextra
AR = ar rcs
SRC = ft_isdigit \
	ft_strcmp \
	ft_split \
	ft_atoi \
	ft_lstiter \
	ft_lstadd_front \
	ft_lstadd_back \
	ft_lstnew \

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