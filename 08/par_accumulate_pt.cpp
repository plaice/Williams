#include "par_accumulate_pt.h"
#include <list>

int main (int argc, char* argv[])
{
   std::list<int> input;
   int result = parallel_accumulate(input.begin(), input.end(), 0);
   return 0;
}
