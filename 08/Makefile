BINARIES = par_quicksort \
           par_accumulate \
           par_accumulate_pt \
           par_accumulate_es \
           par_accumulate_async \
           par_foreach \
           par_foreach_async \
           par_find \
           par_find_async \
           par_partialsum_pu

ERRORS = par_partialsum.err

all: $(BINARIES) $(ERRORS)

%: %.cpp %.h join_threads.h
	g++ -std=c++11 $< -lpthread -o $@

%.err: %.cpp %.h join_threads.h
	-g++ -std=c++11 $< -lpthread >$@ 2>&1

clean:
	rm -f $(BINARIES) $(ERRORS)
