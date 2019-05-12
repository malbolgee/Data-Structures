output: main.o bin_tree.o
	gcc main.o bin_tree.o -o output

main.o: main.c
	gcc -c -O2 main.c

bin_tree.o: bin_tree.c
	gcc -c -O2 bin_tree.c

clean:
	rm *.o