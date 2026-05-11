CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGETS = holaorga ej3 ej4 ej5 ej6 ej7

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS) *.o

.PHONY: all clean
