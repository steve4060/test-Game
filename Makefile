.POXIS:

all: main

main: main.c
	gcc -o main main.c -Wall -Wextra -ggdb -I./raylib-5.0_linux_amd64/include -L./raylib-5.0_linux_amd64/include/lib -l raylib

run: main
	./main

.PHONY: run
