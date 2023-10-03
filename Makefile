CC=gcc
CFLAGS=-Wall
SRC_DIR=src
BUILD_DIR=build
TARGET=hexout

all: $(TARGET)

$(TARGET): $(SRC_DIR)/$(TARGET).c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRC_DIR)/$(TARGET).c -o $(BUILD_DIR)/$(TARGET)

$(BUILD_DIR):
	mkdir $(BUILD_DIR);

clean:
	rm $(BUILD_DIR)/$(TARGET)