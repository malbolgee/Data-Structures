output: main.o avl_tree.o
	gcc main.o avl_tree.o -o output

main.o: main.c
	gcc -c -O2 main.c

avl_tree.o: avl_tree.c
	gcc -c -O2 avl_tree.c

clean:
	rm *.o