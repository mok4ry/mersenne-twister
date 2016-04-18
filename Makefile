# Makefile for Mersenne Twister

BUILD_DIR= ./bin
OBJS= mtwist.o

run: compile
	$(BUILD_DIR)/mtwist

compile: $(OBJS) $(BUILD_DIR)
	gcc -o $(BUILD_DIR)/mtwist main.c mtwist.o

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

mtwist.o:
	gcc -c mtwist.c

clean:
	rm -r $(BUILD_DIR)
	rm *.o
