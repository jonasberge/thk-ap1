CPREF=exc
CMAKF=c.mak

JAVAPREF=Exercise
JAVAMAKF=java.mak

all:
	$(MAKE) -f $(CMAKF) $@
	$(MAKE) -f $(JAVAMAKF) $@

$(CPREF)%:
	$(MAKE) -f $(CMAKF) $@

$(JAVAPREF)%:
	$(MAKE) -f $(JAVAMAKF) $@

.PHONY: clean
clean:
	$(MAKE) -f $(CMAKF) $@
	$(MAKE) -f $(JAVAMAKF) $@

