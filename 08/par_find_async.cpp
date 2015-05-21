#include "par_find_async.h"

int main (int argc, char* argv[])
{
   std::vector<int> input;
   std::vector<int>::iterator it =
       parallel_find(input.begin(), input.end(), 42);
   return 0;
}
