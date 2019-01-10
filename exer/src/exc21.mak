INCDIR=../include
OBJDIR=../obj
BINDIR=../bin

MAIN = exc21
BIN = $(BINDIR)/$(MAIN)
_OBJ = $(MAIN).o strfuncs.o
_DEPS = strfuncs.h

OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))
DEPS = $(patsubst %,$(INCDIR)/%,$(_DEPS))

CC=gcc
CFLAGS=-std=c99 -I$(INCDIR)

$(OBJDIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -o $(BIN) $^ $(CFLAGS)

.PHONY: clean
clean:
	rm $(BIN) $(OBJ)

