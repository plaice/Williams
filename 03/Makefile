BINARIES = listing_03.01 \
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
           listing_03.13
OBJECTS =
ERRORS =

include ../make.mk

listing_03.13: listing_03.13.cpp
	g++ -std=c++11 $< -lpthread -lboost_system -lboost_thread -o $@
