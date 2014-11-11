
euler3: helper.o euler3.o
	gcc -o $@ $^ $(CFLAGS)

test: euler3_test.o helper.o
	gcc -o $@ $^ $(CFLAGS)
	./test
	rm $@

clean:
	rm -f *.o euler3 test

include ../Makefile.in
