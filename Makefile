.POXIS:

all: main

main: main.c
	gcc -o main main.c -Wall -Wextra -ggdb -I./raylib/raylib-5.0_linux_amd64/include -L./raylib/raylib-5.0_linux_amd64/lib -l:libraylib.a -I.

run: main
	./main

.PHONY: run
