all: ex01 ex02 ex03 ex04 ex05

ex01: ex01.o
	gcc -o ex01 ex01.o

ex01.o: ex01.c
	gcc -c ex01.c

ex02: ex02.o
	gcc -o ex02 ex02.o

ex02.o: ex02.c
	gcc -c ex02.c

ex03: ex03.o
	gcc -o ex03 ex03.o

ex03.o: ex03.c
	gcc -c ex03.c

ex04: ex04.o
	gcc -o ex04 ex04.o

ex04.o: ex04.c
	gcc -c ex04.c

ex05: ex05.o
	gcc -o ex05 ex05.o

ex05.o: ex05.c
	gcc -c ex05.c
