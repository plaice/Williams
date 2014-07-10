BINARIES = listing_01.01 \
           listing_02.01 \
           listing_02.02 \
           listing_02.03 \
           listing_02.04 \
           listing_02.05 \
           listing_02.06 \
           listing_02.07 \
           listing_02.08 \
           listing_03.01 \
           listing_03.02 \
           listing_03.03 \
           listing_03.04 \
           listing_03.05 \
           listing_03.06 \
           listing_03.07 \
           listing_03.08 \
           listing_03.09 \
           listing_03.10 \
           listing_03.11 \
           listing_03.12 \
           listing_03.13 \
           listing_04.01 \
           listing_04.02 \
           listing_04.03 \
           listing_04.05 \
           listing_04.06 \
           listing_05.03 \
           listing_05.04 \
           listing_05.05 \
           listing_05.06 \
           listing_05.07 \
           listing_05.08 \
           listing_05.09 \
           listing_05.10 \
           listing_05.12 \
           listing_05.13 \
           listing_06.02

OBJECTS = listing_04.04.o \
          listing_04.07.o \
          listing_04.08.o \
          listing_04.09.o \
          listing_04.11.o \
          listing_04.12.o \
          listing_04.13.o \
          listing_04.14.o \
          listing_05.01.o \
          listing_05.02.o \
          listing_06.01.o \
          listing_06.03.o \
          listing_06.04.o \
          listing_06.05.o \
          listing_06.06.o \
          listing_06.07.o \
          listing_06.11.o \
          listing_06.13.o \
          listing_07.01.o \
          listing_07.02.o \
          listing_07.03.o \
          listing_07.07.o \
          listing_07.09.o \
          listing_07.12.o \
          listing_07.13.o \
          listing_07.15.o \
          listing_08.13.o \
          listing_08.02.o \
          listing_09.02.o \
          listing_a.03.o

ERRORS = listing_04.10.err \
         listing_04.15.err \
         listing_04.16.err \
         listing_05.11.err \
         listing_06.08.err \
         listing_06.09.err \
         listing_06.10.err \
         listing_06.12.err \
         listing_07.04.err \
         listing_07.05.err \
         listing_07.06.err \
         listing_07.08.err \
         listing_07.10.err \
         listing_07.11.err \
         listing_07.14.err \
         listing_07.16.err \
         listing_07.17.err \
         listing_07.18.err \
         listing_07.19.err \
         listing_07.20.err \
         listing_07.21.err \
         listing_08.01.err \
         listing_08.03.err \
         listing_08.04.err \
         listing_08.05.err \
         listing_08.06.err \
         listing_08.07.err \
         listing_08.08.err \
         listing_08.09.err \
         listing_08.10.err \
         listing_08.11.err \
         listing_08.12.err \
         listing_09.01.err \
         listing_09.03.err \
         listing_09.04.err \
         listing_09.05.err \
         listing_09.06.err \
         listing_09.07.err \
         listing_09.08.err \
         listing_09.09.err \
         listing_09.10.err \
         listing_09.11.err \
         listing_09.12.err \
         listing_09.13.err \
         listing_10.01.err \
         listing_a.01.err \
         listing_a.02.err \
         listing_a.04.err \
         listing_c.01.err \
         listing_c.02.err \
         listing_c.03.err \
         listing_c.04.err \
         listing_c.05.err \
         listing_c.06.err \
         listing_c.07.err \
         listing_c.08.err \
         listing_c.09.err \
         listing_c.10.err

all: $(BINARIES) $(OBJECTS) $(ERRORS)

%: %.cpp
	g++ -std=c++11 $< -lpthread -o $@

listing_03.13: listing_03.13.cpp
	g++ -std=c++11 $< -lpthread -lboost_system -lboost_thread -o $@

%.o: %.cpp
	g++ -std=c++11 -c $< -o $@

%.err: %.cpp
	-g++ -std=c++11 $< -lpthread > $@ 2>&1

clean:
	rm -f $(BINARIES) $(OBJECTS) $(ERRORS)
