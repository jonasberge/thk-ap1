INCDIR=../include
OBJDIR=../obj
BINDIR=../bin

PREF=exc

CC=gcc
CFLAGS=-std=c99 -I$(INCDIR)
LIBS=-lm

$(OBJDIR)/%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(patsubst %.c,%,$(wildcard $(PREF)*.c))

$(PREF)%: $(OBJDIR)/$(PREF)%.o
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS) $(LIBS)

$(PREF)20:
	$(MAKE) -f $(PREF)20.mak

$(PREF)21:
	$(MAKE) -f $(PREF)21.mak

.PHONY: clean
clean:
	rm -r $(BINDIR)/* $(OBJDIR)/*.o

