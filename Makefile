SUBDIRS = 01 02 03 06 07 08 orig

all:
	for i in $(SUBDIRS); do (cd $$i; make); done

clean:
	for i in $(SUBDIRS); do (cd $$i; make clean); done
