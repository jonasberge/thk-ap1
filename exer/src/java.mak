BINDIR=../bin
HTMLDIR=${HOME}/public_html
DOCDIR=$(HTMLDIR)/doc

PREF=Exercise
JAVAC=javac
JAVADOC=javadoc
CFLAGS=-d $(BINDIR)
DOCFLAGS=-encoding UTF-8 -charset UTF-8 -docencoding UTF-8 -author

gendoc = $(JAVADOC) \
	 -d $(DOCDIR)/$(shell echo $(basename $(1)) | tr A-Z a-z) $1 \
	 $(DOCFLAGS) $(2)

all: $(patsubst %.java,%,$(wildcard $(PREF)*.java))

%.class:
	$(JAVAC) $*.java $(CFLAGS)

$(PREF)%: $(PREF)%.class

$(PREF)29: %: %.class
	$(call gendoc,$@.java)

$(PREF)35: %: %.class
	$(call gendoc,Rational.java,-private)

.PHONY: clean
clean:
	rm $(BINDIR)/*.class

