# Create executible with:
#     make
# Clean up executable with:
#     make clean
.PHONY: clean

main_pi: main_pi.cpp
	@echo "Compiling $@ using source file $^"
	@g++ $^ -g -lwiringPi -o $@

clean:
	@echo "Cleaning compiled files"
	@rm -rf *.o main_pi

all: main++
