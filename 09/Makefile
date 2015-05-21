BINARIES = threadpool \
           threadpool_wt \
           threadpool_rpt \
           par_accumulate_tp \
           par_quicksort_tp \
           #par_foreach_async \
           #par_find \
           #par_find_async \
           #par_partialsum_pu

ERRORS = #par_accumulate_pt.err \
         #par_accumulate_es.err \
         #par_partialsum.err

all: $(BINARIES) $(ERRORS)

%: %.cpp %.h
	g++ -std=c++11 $< -lpthread -o $@

%.err: %.cpp %.h
	-g++ -std=c++11 $< -lpthread >$@ 2>&1

clean:
	rm -f $(BINARIES) $(ERRORS)
