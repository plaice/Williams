BINARIES = threadpool \
           threadpool_wt \
           threadpool_rpt \
           par_accumulate_tp \
           par_quicksort_tp \
           work_stealing_queue \
           interruptible_thread \
           #threadpool_ws

ERRORS = threadpool_ws.err \
         threadpool_wq.err \
         #par_accumulate_es.err \
         #par_partialsum.err

all: $(BINARIES) $(ERRORS)

%: %.cpp %.h
	g++ -std=c++11 $< -lpthread -o $@

%.err: %.cpp %.h
	-g++ -std=c++11 $< -lpthread >$@ 2>&1

clean:
	rm -f $(BINARIES) $(ERRORS)
