BINDIR=../bin
HTMLDIR=${HOME}/public_html
DOCDIR=$(HTMLDIR)/doc

PREF=Exercise
JAVAC=javac
JAVADOC=javadoc
FLAGS=-d $(BINDIR)

gendoc = $(JAVADOC) -d $(DOCDIR)/$(shell echo $(basename $1) | tr A-Z a-z) $1

all: $(patsubst %.java,%,$(wildcard $(PREF)*.java))

$(PREF)%:
	$(JAVAC) $@.java $(FLAGS)

$(PREF)29:
	$(JAVAC) $@.java $(FLAGS)
	$(call gendoc,$@.java)

$(PREF)35:
	$(JAVAC) $@.java $(FLAGS)
	$(call gendoc,Rational.java)

.PHONY: clean
clean:
	rm $(BINDIR)/*.class

