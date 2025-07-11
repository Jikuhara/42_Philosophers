# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/05 15:45:00 by kei2003730        #+#    #+#              #
#    Updated: 2025/07/11 11:33:08 by kei2003730       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------------------------------------------------------------------
#> variables
#-----------------------------------------------------------------------------

NAME		:= Philosopher

#─ compile config ────────────────────────────────────────────────────────────

CC			:= cc
CFLAGS	:= -Wall -Wextra -Werror

#─ directory name ────────────────────────────────────────────────────────────

OBJDIR		:= obj

#─ sources & objects ─────────────────────────────────────────────────────────

SRCS		:= main.cpp 
OBJS		:= $(SRCS:%.c=$(OBJDIR)/%.o)

#─ colors ────────────────────────────────────────────────────────────────────

GREEN		:= \033[32m
YELLOW		:= \033[33m
CYAN		:= \033[36m
WHITE		:= \033[37m
MAGENTA		:= \033[35m
RESET		:= \033[0m
BOLD		:= \033[1m

#-----------------------------------------------------------------------------
#> rules
#-----------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo "$(GREEN)$(BOLD)========================================="
	@echo "    $(NAME) created successfully!"
	@echo "=========================================$(RESET)"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@echo "Compiled ✅ $(WHITE)$(BOLD) $< $(RESET)"
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf $(OBJDIR)
	@echo "$(CYAN)Object files cleaned.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(CYAN)$(NAME) removed.$(RESET)"

re: fclean all

leak: $(NAME)
	@echo "$(MAGENTA)$(BOLD)========================================="
	@echo "    Checking Memory Leaks..."
	@echo "=========================================$(RESET)"
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME) "test string"
	@echo "$(GREEN)$(BOLD)Leak check completed!$(RESET)"

.PHONY: all clean fclean re leak
