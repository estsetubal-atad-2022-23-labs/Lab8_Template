default:
	gcc -o prog main.c input.c

debug:
	gcc -o prog -g main.c input.c

clean:
	rm -f ./prog
