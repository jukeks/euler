
euler3: helper.o euler3.o
	$(CC) -o $@ $^ $(CFLAGS)

test: euler3_test.o helper.o
	$(CC) -o $@ $^ $(CFLAGS)
	./test
	rm $@

clean:
	rm -f *.o euler3 test

include ../Makefile.in
