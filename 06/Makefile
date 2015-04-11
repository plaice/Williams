BINARIES = ts_stack \
           ts_queue_cv \
           ts_queue_sp \
           queue \
           queue_dn \
           ts_queue_fgl \
           ts_queue_lw \
           ts_lookup_table \
           ts_list

all: $(BINARIES)

%: %.cpp %.h
	g++ -std=c++11 $< -lpthread -o $@

ts_lookup_table: ts_lookup_table.cpp ts_lookup_table.h
	g++ -std=c++11 $< -lpthread -lboost_system -lboost_thread -o $@

clean:
	rm -f $(BINARIES)
