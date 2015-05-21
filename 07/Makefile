BINARIES = spinlock \
           lf_stack_nl \
           lf_stack \
           lf_stack_hp \
           lf_stack_lfsp \
           lf_queue_sp_sc \
           lf_queue_rc \
           lf_queue_rc_help

ERRORS = lf_stack_rc.err \
         lf_stack_rc_rao.err

all: $(BINARIES) $(ERRORS)

%: %.cpp %.h
	g++ -std=c++11 $< -lpthread -o $@

%.err: %.cpp %.h
	-g++ -std=c++11 $< -lpthread >$@ 2>&1

clean:
	rm -f $(BINARIES) $(ERRORS)
