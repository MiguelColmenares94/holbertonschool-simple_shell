# C - Simple shell

A simple UNIX command line interpreter.

## Installation

First clone this repository 

```bash
git clone https://github.com/MiguelColmenares94/holbertonschool-printf
`a
after cloning the repository locate inside the repository folder and use "gcc" compiler.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c *.h -o simple_shell
```

## Usage
```bash 
./simple_shell
```
## Examples
```bash 
echo "ls" | ./simple_shell
```

```bash
echo "pwd" | ./simple_shell
```
```bash
cat << EOF | ./simple_shell
ls
EOF
```

```bash
cat << EOF | ./simple_shel
pwd
EOF
```
## Description of files

|File|Description|
|--|--|
|main.h|header file with prototypes and all libraries|
|main.c|Calls the shell loop|
|ss_loop|Print prompt and control Read, Parse & Execute user input|
|ss_read_line.c|Read stdin from user|
|ss_split_line|Break the input string into individual tokens|
|ss_execute|Check if argument input is NULL & calls launch|
|ss_launch|Take arguments, fork process and run commands in PATH|

## Contributing

This project was created by:

- Miguel Colmenares
- Victor Romero

For the C - Simple Shell evaluation of Holberton School Peru




