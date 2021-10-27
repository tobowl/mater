OBJS = 1.o

a: $(OBJS)
	gcc $(OBJS) -o a
1.o: 1.c
	gcc -c 1.c
clean:
	rm -rf *.o a
