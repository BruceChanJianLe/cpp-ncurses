# CPP NCURSES

This is a note on how to use ncurses as a library. This library is very handy to display information on the terminal and the license is of MIT.

![image1](cpp-ncurses-1.png)
![image1](cpp-ncurses-2.png)
![image1](cpp-ncurses-3.png)

## Installation
```bash
# Tested for Ubuntu 16
sudo apt-get install libncurses-dev
# Check if it is installed
which ncurses5-config
```

## Compiling and Running
```
mkdir build
cd build
cmake ..
make
./test
```
