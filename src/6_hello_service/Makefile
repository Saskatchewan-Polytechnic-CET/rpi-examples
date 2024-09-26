# Create executible with:
#     make
# Clean up executable with:
#     make clean
.PHONY: clean

SOURCE  := main_pi.cpp
LIBS    := -lwiringPi
FLAGS   := -g
EXEC    := main_pi
SERVICE := ${EXEC}.service

${EXEC}: ${SOURCE}
	@echo "Compiling $@ using source file $^"
	@g++ $^ ${FLAGS} ${LIBS} -o $@

install: ${EXEC}
	@echo "Installing program"
	@sudo cp ${EXEC} /usr/local/bin
	@echo "Installing service"
	@sudo cp ${SERVICE} /lib/systemd/system
	@echo "Starting service"
	@sudo systemctl enable ${SERVICE}
	@sudo systemctl start ${SERVICE}

uninstall:
	@echo "Stopping service"
	@sudo systemctl stop ${SERVICE} 2> /dev/null
	@sudo systemctl disable ${SERVICE}
	@echo "Uninstalling program"
	@sudo rm -f /usr/local/bin/${EXEC}
	@echo "Uninstalling service"
	@sudo rm -f /lib/systemd/system/${SERVICE}

clean:
	@echo "Cleaning compiled files"
	@rm -rf *.o ${EXEC}

all: ${EXEC}
