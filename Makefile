CC := gcc
CFLAGS := ${CFLAGS} -Wall -Werror -Wextra -std=c11

all: pascal_triangle pascal_matrix

pascal_triangle: src/pascal_triangle.c
	${CC} ${CFLAGS} src/pascal_triangle.c -o bin/pascal_triangle -lm

pascal_matrix: src/pascal_matrix.c
	${CC} ${CFLAGS} src/pascal_matrix.c -o bin/pascal_matrix -lm