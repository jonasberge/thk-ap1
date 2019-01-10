BINDIR=../bin

PREF=Exercise
JAVAC=javac
FLAGS=-d $(BINDIR)

all: $(patsubst %.java,%,$(wildcard $(PREF)*.java))

$(PREF)%:
	$(JAVAC) $@.java $(FLAGS)

.PHONY: clean
clean:
	rm $(BINDIR)/*.class

