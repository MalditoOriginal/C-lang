CC = gcc
CFLAGS = -Wall
LDFLAGS =

SRC_DIR = /Users/fletamar/Desktop/C_Functions_Library/src/Examples/Chapter_4
BIN_DIR = /Users/fletamar/Desktop/C_Functions_Library/bin

# Source files
SRCS = $(SRC_DIR)/match_pttrn.c
# Add more source files if needed

# Object files
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%.o, $(SRCS))

# Executable name
TARGET = $(BIN_DIR)/Program

# Build rules
all: clean $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean
