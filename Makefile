NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
LIBFT_DIR = libft
OBJ_DIR = obj

# SRCS = $(wildcard$(SRC_DIR)/*.c)
# LIBFT_SRCS = $(wildcard$(LIBFT_DIR)/*.c)

# OBJS = $(patsubst$(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
# LIBFT_OBJS = $(patsubst$(LIBFT_DIR)/%.c,$(OBJ_DIR)/%.o,$(LIBFT_SRCS))

# ALL_OBJS = $(OBJS) $(LIBFT_OBJS)

# all: $(NAME)

# $(NAME): $(ALL_OBJS)
# 	$(CC) $(CFLAGS) $(ALL_OBJS) -o $(NAME)

# $(OBJS)/%.o: $(SRC_DIR)/%.c
# 	@mkdir -p $(dir$@)
# 	$(CC) $(CFLAGS) -c $< -o $@

# $(OBJS)/libft/%.o: $(LIBFT_DIR)/%.c
# 	@mkdir -p $(dir$@)
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -rf $(OBJ_DIR)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re 

SRCS = main.c \
	parsing.c \
	write_error.c \
	free.c \
	simple_sort.c \
	medium_sort.c \
	complex_sort.c \
	adaptive_sort.c \
	reverse_operations.c \
	swap_operations.c \
	push_operations.c \
	rotate_operations.c \
	measure_disorder.c \
	benchmark.c \
	utils.c \
	init_data.c

LIBFT_SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_split.c \
	ft_lstadd_front.c \
	ft_lstadd_back.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstnew.c \
	ft_strlen.c \
	ft_substr.c

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
LIBFT_OBJS = $(addprefix $(OBJ_DIR)/libft/, $(LIBFT_SRCS:.c=.o))

ALL_OBJS = $(OBJS) $(LIBFT_OBJS)

all: $(NAME)

$(NAME): $(ALL_OBJS)
	$(CC) $(CFLAGS) $(ALL_OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/libft/%.o: $(LIBFT_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re