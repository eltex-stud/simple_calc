CC=gcc
CFLAGS=-g -c -Wall -Werror
LDFLAGS=-lm 
SOURCES=*.c
OBJECTS=*.o
BINARY=SIMPLE_CALC

all: $(BINARY)

$(BINARY): $(OBJECTS) 
	$(CC) $(OBJECTS) -o $(BINARY) $(LDFLAGS)

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES)

clean: 
	rm -rf $(OBJECTS) $(BINARY)
