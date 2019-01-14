BINDIR=../bin
HTMLDIR=${HOME}/public_html
DOCDIR=$(HTMLDIR)/doc

PREF=Exercise
JAVAC=javac
JAVADOC=javadoc
FLAGS=-d $(BINDIR)

all: $(patsubst %.java,%,$(wildcard $(PREF)*.java))

$(PREF)%:
	$(JAVAC) $@.java $(FLAGS)

$(PREF)29: 
	$(JAVADOC) -d $(DOCDIR)/$(shell echo $@ | tr A-Z a-z) $@.java

.PHONY: clean
clean:
	rm $(BINDIR)/*.class

