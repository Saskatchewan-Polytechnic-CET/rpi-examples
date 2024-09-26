# Create executible with:
#     make
# Clean up executable with:
#     make clean
.PHONY: clean

main++: main.cpp
	@echo "Compiling $@ using source file $^"
	@g++ $^ -g -o $@

clean:
	@echo "Cleaning compiled files"
	@rm -rf *.o main++

all: main++
