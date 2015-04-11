all: $(BINARIES) $(OBJECTS) $(ERRORS)

%: %.cpp
	g++ -std=c++11 $< -lpthread -o $@

%.o: %.cpp
	g++ -std=c++11 -c $< -o $@

%.err: %.cpp
	-g++ -std=c++11 $< >$@ 2>&1

clean:
	rm -f $(BINARIES) $(OBJECTS) $(ERRORS)
