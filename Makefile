#####################################################
# FILE NAME 										#
# makefile											#
# PURPOSE 											#
# This file will build the project BuzzFizz  		#
# for windows									    #
#####################################################

LINK_TARGET = BuzzFizz.exe

SRC_FILES = $(wildcard ./src/*/*.c)

OBJ_FILES = $(notdir $(patsubst %.c, %.o, $(SRC_FILES) ))

MKDIR_P = mkdir -p 

OUT_DIR = build \
			build/obj \
			build/bin

OBJ_DIR = build/obj/

BIN_DIR = build/bin/

INC_DIR = src/

SRC_PATH = $(dir $(SRC_FILES))

VPATH = $(SRC_PATH) \
		$(BIN_DIR)		

CFLAGS = -Wall \
			-g \
			-O2

LIBS = -lmingw32 \
		-lSDLmain \
		-lSDL

GCC_OPTS = gcc
GCC_OPTS += -c
GCC_OPTS += -I$(INC_DIR)

REBUILDABLES = $(addprefix $(OBJ_DIR), $(OBJ_FILES)) \
				$(addprefix $(BIN_DIR), $(LINK_TARGET))

all: clean folders $(LINK_TARGET)
.PHONY: clean folders

clean: 
	@echo Cleaning project 
	rm -f $(REBUILDABLES)

folders:
	@echo Creating neccesary folders
	@$(MKDIR_P) $(OUT_DIR) 

$(LINK_TARGET): $(OBJ_FILES)
	@echo linking object files
	@gcc -g -o $(BIN_DIR)$@ $(addprefix $(OBJ_DIR),$(OBJ_FILES))

$(OBJ_FILES): %.o : %.c 
	@echo Compiling file: $<
	@$(GCC_OPTS) $(CFLAGS) $< -o $(OBJ_DIR)$@  