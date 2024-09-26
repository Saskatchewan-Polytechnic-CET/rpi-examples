# Getting Started with C, C++ and Python on Raspberry Pi

## Overview

### 1_hello_c

Basic compilation of C files in linux. 
Comparison between debug symbols and no debug symbols.

```bash
gcc main.c                  # Creates default a.out file
./a.out                     # Run executable
gcc main.c -o main_nodebug  # Compile using GCC
gdb ./main_nodebug          # Debug executable with no symbols
gcc main.c -g -o main_debug # Compile using GCC with debug symbols (-g argument)
gdb ./main_debug            # Debug executable with symbols
./build.sh                  # Run both commands automatically
```

### 2_hello_cpp

Basic compilation of C++ files in linux.

```bash
g++ main.cpp -g -o main++   # Compile file using G++ with debug symbols
./main++                    # Run executable
./build.sh                  # Run both commands automatically
```

### 3_hello_make

Standard compilation of C++ using a Makefile to simplify building and cleaning.

```bash
make                       # Builds executabke
make clean                 # Deletes executable
```

### 4_hello_pi

Blink LED example using GPIO with C++.

```bash
make                       # Builds executabke
./main_pi                  # Run blink program
make clean                 # Deletes executable
```

### 5_hello_pipy

Blink LED example using GPIO with Python.

```bash
python ./main_pi.py        # Run blink program
```

### 6_hello_service

Blink LED example that is installed as a system service (for reboots).
Uses a refactored Makefile to make it easier to modify.

```bash
make                       # Builds executable
make install               # Installs service
reboot                     # Restart system and blink should start on sysinit
make uninstall             # Removes service
```

### 7_loop

Chasing LED example with Makefile and system service.

```bash
make                       # Builds executable
make install               # Installs service
reboot                     # Restart system and loop should start on sysinit
make uninstall             # Removes service
```

## Resources

1. Read about WiringPi

   https://roboticsbackend.com/introduction-to-wiringpi-for-raspberry-pi

* PIN overview for GPIO
* Multiplexing guide

2. Install visual studio code

   ```bash
   sudo apt install code
   ```

3. Read about the GNU debugger (gdb)

   https://www.tutorialspoint.com/gnu_debugger/gdb_quick_guide.htm

4. Install Wiring Pi

   ```bash
   git clone https://github.com/WiringPi/WiringPi
   cd WiringPi
   ./build
   pip install wiringpi
   ```
