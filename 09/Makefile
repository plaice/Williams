BINARIES = threadpool \
           threadpool_wt \
           threadpool_rpt \
           par_accumulate_tp \
           par_quicksort_tp \
           work_stealing_queue \
           interruptible_thread \
           interruptible_thread_tm \
           interruptible_thread_iw

ERRORS = threadpool_ws.err \
         threadpool_wq.err

all: $(BINARIES) $(ERRORS)

%: %.cpp %.h
	g++ -std=c++11 $< -lpthread -o $@

interruptible_thread_tm: interruptible_thread_tm.cpp
	g++ -std=c++11 $< -lpthread -lboost_system -lboost_thread -o $@

%.err: %.cpp %.h
	-g++ -std=c++11 $< -lpthread >$@ 2>&1

clean:
	rm -f $(BINARIES) $(ERRORS)
