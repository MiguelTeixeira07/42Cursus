include config.mk
include targets.mk

NAME = push_swap

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo "Building $(NAME)."
	@$(COMPILE) $(OBJS) $(LIBFT) $(LIBFT_FLAGS) -o $(NAME)

clean:
	@printf "$(YELLOW)Cleaning objects.$(RESET)\n"
	@$(REMOVE) $(OBJS)
	@$(REMOVE) $(BONUS_OBJS)
	@make clean -s -C $(LIBFT_DIR)

fclean: clean
	@printf "$(YELLOW)Cleaning binaries.$(RESET)\n"
	@$(REMOVE) $(NAME)
	@$(REMOVE) $(BONUS)
	@make fclean -s -C $(LIBFT_DIR)

re: fclean all