all: sum.o sum_module.so

sum.o:
	cc -c -o sum.o sum.c

sum_module.so:
	cc -shared -I/usr/include/python3.12 -o sum_module.so sum.o sum_module.c

clean:
	rm -rf *.o *.so

.PHONY: all clean
