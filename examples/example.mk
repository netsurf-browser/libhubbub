# From the top level:
#
#     make -C examples -f example.mk clean
#     make -C examples -f example.mk
#     ./examples/libxml test/data/html/misnested.html

CC := gcc
LD := gcc

CFLAGS := `pkg-config --cflags libhubbub` `xml2-config --cflags`
LDFLAGS := `pkg-config --libs libhubbub` `xml2-config --libs`

SRC := libxml.c

libxml: $(SRC:.c=.o)
	@$(LD) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	$(RM) libxml $(SRC:.c=.o)

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $<

