INCDIR=../include
OBJDIR=../obj
BINDIR=../bin

PREF=exc
CC=gcc
CFLAGS=-std=c99 -I$(INCDIR)
LIBS=-lm

all: $(patsubst %.c,%,$(wildcard $(PREF)*.c))

$(OBJDIR)/%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(PREF)%: $(OBJDIR)/$(PREF)%.o
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS) $(LIBS)

$(PREF)20:
	$(MAKE) -f $(PREF)20.mak

$(PREF)21:
	$(MAKE) -f $(PREF)21.mak

.PHONY: clean
clean:
	find $(BINDIR) -type f ! -name "*.*" -exec rm {} \;
	rm $(OBJDIR)/*.o

