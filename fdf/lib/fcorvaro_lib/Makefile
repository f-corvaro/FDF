# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 20:48:47 by fcorvaro          #+#    #+#              #
#    Updated: 2024/02/13 17:31:55 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Output: Appereance ------------------------------------------------------ #

# Start and end sequences for color codes -- REMEMBER (add ; and m)
START = \033[
END = \033[0m

# ------------  FOREGROUND COLORS  ------------------------------------------- #
# Black, Red, Green, Yellow, Blue, Magenta, Cyan, White #
BK = 30
R = 31
G = 32
Y = 33
BE = 34
M = 35
C = 36
W = 37

# ------------  BACKGROUND COLORS  ------------------------------------------- #
# Black, Red, Green, Yellow, Blue, Magenta, Cyan, White #
BKK = 40
RR = 41
GG = 42
YY = 43
BEE = 44
MM = 45
CC = 46
WW = 47

# ------------  TEXT STYLES  ------------------------------------------------- #
# Bold text, Faint text, Italic text, Underlined text, Blinking text ...#
#... Reverse colors, Hidden text, Strikethrough text #
BOLD = 1
FAINT = 2
ITALIC = 3
UNDERLINE = 4
BLINKING = 5
REVERSE =7
HIDDEN = 8
STRIKE = 9

# ------------  ARCHIVE COMMAND  --------------------------------------------- #
AR = ar rs

# ------------  COMPILER COMMAND  -------------------------------------------- #
CC = cc

# ------------  REMOVE COMMAND  ---------------------------------------------- #
RM = rm -f

# ------------  COMPILER FLAGS  ---------------------------------------------- #
CFLAGS = -Wall -Wextra -Werror

# ------------  SOURCE DIRECTORY  -------------------------------------------- #
SRCS_DIR = srcs

# ------------  OBJECTS DIRECTORY  ------------------------------------------- #
OBJS_DIR = objs

# ------------  BUILD DIRECTORY  --------------------------------------------- #
BUILD_DIR = build

# ------------  BUILD FILE NAME  --------------------------------------------- #
BUILD = libftprintf.a

# ------------  FULL PATH TO THE BUILD FILE  --------------------------------- #
NAME = $(BUILD_DIR)/$(BUILD)

# ------------  LIBFT LIBRARY FILE  ------------------------------------------ #
LIBFT = libft/build/libft.a

# ------------  LIBFT DIRECTORY  --------------------------------------------- #
LIBFT_DIR = libft

# ------------  SOURCE FILES  ------------------------------------------------ #
SRCS = ft_format.c ft_parse_and_handle_funcs.c ft_printf_funcs.c ft_printf.c \
		ft_ptr.c ft_utility_funcs.c

# ------------  OBJECT FILES  ------------------------------------------------ #
OBJS = $(addprefix $(OBJS_DIR)/, ${SRCS:%.c=%.o})

# ------------  PHONY TARGETS  ----------------------------------------------- #
.PHONY : all clean fclean re bonus help norm

# ------------  DEFAULT TARGET  ---------------------------------------------- #
all: $(NAME)

# ------------  OBJECTS DIRECTORY CREATION TARGET  --------------------------- #
$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

# ------------  BUILD DIRECTORY CREATION TARGET  ----------------------------- #
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# ------------  RULE TO BUILD LIBFT LIBRARY  --------------------------------- #
$(LIBFT): $(LIBFT_DIR)
	@make -s all -C libft

# ------------  LIBRARY CREATION TARGET  ------------------------------------- #
$(NAME): $(LIBFT) $(OBJS) | $(BUILD_DIR)
	@$(AR) $(LIBFT) $(OBJS)
	@$ cp libft/build/libft.a $(NAME)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Compilation completed!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m my_static_C_library created successfully!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(M)m Author: fcorvaro$(END)"

# ------------  OBJECT FILE CREATION TARGET  --------------------------------- #
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling $< ...$(END)"
	@$(CC) $(CFLAGS) -c $< -o $@

# ------------  CLEAN TARGET  ------------------------------------------------ #
clean: $(LIBFT_DIR)
	@make -s clean -C libft
	@if [ -d "$(OBJS_DIR)" ]; then \
		$(RM) -r $(OBJS_DIR); \
		echo "$(START)$(BOLD);$(ITALIC);$(G)m Cleaned up object files. $(OBJS_DIR) has been removed. $(END)"; \
	fi

# ------------  FCLEAN TARGET  ----------------------------------------------- #
fclean: clean
	@make -s fclean -C libft
	@if [ -d "$(BUILD_DIR)" ]; then \
		$(RM) -r $(BUILD_DIR); \
		echo "$(START)$(BOLD);$(ITALIC);$(G)m Cleaned up build files. $(BUILD_DIR) has been removed. $(END)"; \
	fi

# ------------  RE TARGET  --------------------------------------------------- #
re : fclean
	@make -s all

# ------------  BONUS TARGET  ------------------------------------------------ #
bonus: re

# ------------  HELP TARGET  ------------------------------------------------- #
help:
	@echo "$(START)$(BOLD);$(M)mUsage:$(END)"
	@echo "  make [command]"
	@echo ""
	@echo "$(START)$(BOLD);$(M)mCommands:$(END)"
	@echo "  $(START)$(BOLD);$(Y)mall$(END):     Compiles the library and generates libftprintf.a"
	@echo "  $(START)$(BOLD);$(Y)mbonus$(END):  Performs the same actions as 're'"
	@echo "  $(START)$(BOLD);$(Y)mclean$(END):  Removes all object files"
	@echo "  $(START)$(BOLD);$(Y)mfclean$(END): Removes all object files and the libftprintf.a"
	@echo "  $(START)$(BOLD);$(Y)mnorm$(END):   Checks the code against the 42 norm using Norminette"
	@echo "  $(START)$(BOLD);$(Y)mhelp$(END):   Display this help message"
	@echo "  $(START)$(BOLD);$(Y)mre$(END):     Performs 'fclean' and 'all'"
	@echo ""
	@echo "$(START)$(BOLD);$(M)mProject Description:$(END)"
	@echo "  This project is a custom implementation of printf function in C."
	@echo "  It includes a library of utility functions (libft) and a set of"
	@echo "  functions to handle formatting and printing of different data types."
	@echo "  It includes the bonus functions from get_next_line."

# ------------  NORM TARGET  ------------------------------------------------- #
norm:
	@OUTPUT="$(shell norminette $(SRCS_DIR) $(LIBFT_DIR) | grep -v OK)"; \
	if [ -z "$$OUTPUT" ]; then \
		echo "$(START)$(BOLD);$(ITALIC);$(G)m Norminette check: $(END)$(START)$(BOLD);$(ITALIC);$(G)m All files are OK! $(END)"; \
	else \
		echo "$(START)$(BOLD);$(ITALIC);$(R)m Norminette check: $(END)$(START)$(BOLD);$(ITALIC);$(R)m Errors found: $$OUTPUT $(END)"; \
	fi

# ------------  INCLUDE DEPENDENCY FILES  ------------------------------------ #
-include $(OBJS_DIR)/*.d