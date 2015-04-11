BINARIES = lf_stack \
           lf_stack_hp \
           lf_stack_lfsp \
           lf_queue_sp_sc

ERRORS = lf_stack_rc.err \
         lf_stack_rc_rao.err

all: $(BINARIES) $(ERRORS)

%: %.cpp %.h
	g++ -std=c++11 $< -lpthread -o $@

%.err: %.cpp %.h
	-g++ -std=c++11 $< -lpthread >$@ 2>&1


#ts_lookup_table: ts_lookup_table.cpp ts_lookup_table.h
#	g++ -std=c++11 $< -lpthread -lboost_system -lboost_thread -o $@

clean:
	rm -f $(BINARIES) $(ERRORS)
