#include "par_find_async.h"
#include <list>

int main (int argc, char* argv[])
{
   std::list<int> input;
   std::list<int>::iterator it =
       parallel_find(input.begin(), input.end(), 42);
}
