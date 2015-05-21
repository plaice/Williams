SUBDIRS = 01 02 03 04 05 06 07 08 09 10

all:
	for i in $(SUBDIRS); do (cd $$i; make); done

clean:
	for i in $(SUBDIRS); do (cd $$i; make clean); done
