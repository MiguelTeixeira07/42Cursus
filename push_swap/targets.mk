# Directories
OP_DIR 	= ./operations
ERR_DIR = ./errors
SRC_DIR = ./src
DB_DIR = ./debugging
SORT_DIR = ./sorting

SRCS = $(addsuffix .c, \
	$(NAME) \
	$(addprefix $(ERR_DIR)/,  errors) \
	$(addprefix $(OP_DIR)/, operator push rotate swap) \
	$(addprefix $(SRC_DIR)/,  input_formatting utils) \
	$(addprefix $(SORT_DIR)/,  sorting index_sorting) \
	$(addprefix $(DB_DIR)/,  debug_functions) \
)

OBJS = $(SRCS:%.c=%.o)

# LIBFT linking and compilation flags
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_FLAGS = -L$(LIBFT_DIR)/include

$(LIBFT_DIR)/.git:
	git submodule update --init $(LIBFT_DIR)

$(LIBFT): $(LIBFT_DIR)/.git
	@printf "$(GREEN)Building LIBFT.$(RESET)\n"
	@make -s -C $(LIBFT_DIR)
