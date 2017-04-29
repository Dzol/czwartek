OBJS = bin/czwarty.o
CC = clang++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

.PHONY: go clean before

czwarty: before $(OBJS)

	$(CC) $(LFLAGS) $(OBJS) -o czwarty

bin/czwarty.o: src/main.cc

	$(CC) $(CFLAGS) src/main.cc -o bin/czwarty.o

go: czwarty

	./czwarty

clean:

	\rm */*.o *~ czwarty

before:

	if [ ! -d bin ]; then mkdir bin; fi
