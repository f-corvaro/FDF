# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 17:51:11 by fcorvaro          #+#    #+#              #
#    Updated: 2024/03/03 16:36:18 by fcorvaro         ###   ########.fr        #
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

# ------------  COMPILER COMMAND  -------------------------------------------- #
CC = gcc
# ------------  REMOVE COMMAND  ---------------------------------------------- #
RM = rm -f
# ------------  DEBUGGER LEAKS FLAGS  ---------------------------------------- #
LEAKS = -g3 -ggdb
# ------------  COMPILER FLAGS  ---------------------------------------------- #
CFLAGS = -Wall -Wextra -Werror -O3

# ------------  BUILD FILE NAME  --------------------------------------------- #
BUILD = fdf
# ------------  FULL PATH TO THE BUILD FILE  --------------------------------- #
NAME = $(BUILD)
# ------------  SOURCES FILES  ----------------------------------------------- #
SRCS = $(shell find $(SRCS_DIR) -name "*.c")

# ------------  OBJECTS DIRECTORY  ------------------------------------------- #
OBJS_DIR = objs
# ------------  OBJECT FILES  ------------------------------------------------ #
OBJS = $(patsubst $(SRCS_DIR)/%.c,$(OBJS_DIR)/%.o,$(SRCS))
# ------------  OBJECTS DIRECTORY CREATION TARGET  --------------------------- #
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(@D)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling $<$(END)"
	@$(CC) $(CFLAGS) $(LEAKS) -c $< -o $@ $(INCLUDE)
# ------------  INCLUDE DEPENDENCY FILES  ------------------------------------ #
-include $(OBJS_DIR)/*.d

# ------------  MY LIBRARY DIRECTORY  ---------------------------------------- #
MY_LIB_DIR = lib/fcorvaro_lib
# ------------  MY LIBRARY FILE  --------------------------------------------- #
MY_LIB = lib/fcorvaro_lib/build/libftprintf.a
# ------------  LIBRARY LINKING COMMAND  ------------------------------------- #
LIBRARIES	= -L./lib/fcorvaro_lib/build -lftprintf

# ------------  INCLUDE PATHS AND COMPILATION FLAGS SETUP  ------------------- #
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)	# Rule for Linux system
	MINILIBX_DIR = lib/mlx_linux/
	MINILIBXCC = -I mlx -L $(MINILIBX_DIR) -lmlx -lm -lXext -lX11 -lz
	SRCS_DIR = srcs_linux
endif
ifeq ($(UNAME_S),Darwin)	# Darwin is the UNIX that macOS is based on
	MINILIBX_DIR = lib/mlx_macos/
	MINILIBXCC = -I mlx -L $(MINILIBX_DIR) -lmlx -framework OpenGL -framework AppKit
	SRCS_DIR = srcs_macos
endif

# ------------  HEADER FILE PATHS  ------------------------------------------- #
INCLUDE = -I./include/ -I$(MINILIBX_DIR) -I$(MY_LIB_DIR)/include/
# ------------  MINILIBX LIBRARY PATH  --------------------------------------- #
MINILIBX = $(MINILIBX_DIR)libmlx.a

# ------------  PHONY TARGETS  ----------------------------------------------- #
.PHONY : all clean fclean re bonus norm makelibs help system_info
# ------------  BUILD LIBRARIES  --------------------------------------------- #
makelibs:
	@$(MAKE) -sC $(MY_LIB_DIR)
	@$(MAKE) -sC $(MINILIBX_DIR)

system_info:
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Compiled for $(UNAME_S)!$(END)"

# ------------  DEFAULT TARGET  ---------------------------------------------- #
all: makelibs
	@$(MAKE) -s $(NAME) system_info

# ------------  FDF CREATION TARGET  ----------------------------------------- #
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(LEAKS) $(OBJS) $(MINILIBXCC) -o $(NAME) $(INCLUDE) $(LIBRARIES)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Compilation of $(NAME) completed successfully!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m To run the program, use: ./fdf <map_name.fdf>$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(M)m Author: fcorvaro$(END)"

# ------------  OBJECT FILE CREATION TARGET  --------------------------------- #
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling $< ...$(END)"
	@$(CC) $(CFLAGS) $(LEAKS) -c $< -o $@ $(INCLUDE)

# ------------  CLEAN TARGET  ------------------------------------------------ #
clean:
	@make clean -sC $(MY_LIB_DIR)
	@make clean -sC $(MINILIBX_DIR)
	@if [ -d "$(OBJS_DIR)" ]; then \
		$(RM) -r $(OBJS_DIR); \
		echo "$(START)$(BOLD);$(ITALIC);$(G)m Cleaned up object files. $(OBJS_DIR) has been removed. $(END)"; \
	fi

# ------------  FCLEAN TARGET  ----------------------------------------------- #
fclean: clean
	@make -s fclean -sC $(MY_LIB_DIR)
	@$(RM) -f $(MINILIBX)
	@$(RM) -r $(BUILD)

# ------------  RE TARGET  --------------------------------------------------- #
re : fclean
	@make -s all

# ------------  BONUS TARGET  ------------------------------------------------ #
bonus:
		all

# ------------  HELP TARGET  ------------------------------------------------- #
help:
	@echo "  $(START)$(BOLD);$(ITALIC);$(G)m Available targets:$(END)"
	@echo "  make [command]"
	@echo ""
	@echo "  $(START)$(BOLD);$(Y)mall\t\tCompile the project$(END)"
	@echo "  $(START)$(BOLD);$(Y)mclean\t\tRemove object files$(END)"
	@echo "  $(START)$(BOLD);$(Y)mfclean\t\tRemove object files and the executable$(END)"
	@echo "  $(START)$(BOLD);$(Y)mre\t\tRecompile the project$(END)"
	@echo "  $(START)$(BOLD);$(Y)mhelp\t\tDisplay this help message$(END)"
	@echo ""
	@echo "  $(START)$(BOLD);$(M)mProject Description:$(END)"
	@echo "  This project is a 3D Wireframe Viewer (FDF) implemented in C."
	@echo "  The program takes a map as an argument, where each point's altitude is"
	@echo "  represented by a number in the map. The program then renders a 3D"
	@echo "  projection of this landscape using graphical lines connecting the points."
	@echo "  The project includes a library of utility functions (libft) and uses"
	@echo "  the miniLibX library for creating the graphical window and drawing lines."
	@echo "  It demonstrates understanding of graphics programming, matrix transformations,"
	@echo "  and event-driven programming."

# ------------  NORM TARGET  ------------------------------------------------- #
norm:
	@OUTPUT="$(shell norminette $(SRCS_DIR) include/ $(MY_LIB_DIR) | grep -v OK)"; \
	if [ -z "$$OUTPUT" ]; then \
		echo "$(START)$(BOLD);$(ITALIC);$(G)m Norminette check: $(END)$(START)$(BOLD);$(ITALIC);$(G)m All files are OK! $(END)"; \
	else \
		echo "$(START)$(BOLD);$(ITALIC);$(R)m Norminette check: $(END)$(START)$(BOLD);$(ITALIC);$(R)m Errors found: $$OUTPUT $(END)"; \
	fi