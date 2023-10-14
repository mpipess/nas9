CC=gcc
CFLAGS=-g

SRCDIR=src
SRCS=$(wildcard $(SRCDIR)/*.c)

INCDIR=inc
INCS=$(wildcard $(INCDIR)/*.h)
CFLAGS += -I$(INCDIR)

BINDIR=bin
BIN=$(BINDIR)/nas9

$(BIN): $(SRCS) $(INCS)
	$(CC) $(CFLAGS) $< -o $@
#$(BIN): $(SRCS) $(INCS)
#	$(CC) $(CFLAGS) -DDEBUG $< -o $@

clean:
	$(RM) -r $(BINDIR)/*
