#include "par_accumulate_es.h"

int main (int argc, char* argv[])
{
   std::vector<int> input;
   int result = parallel_accumulate(input.begin(), input.end(), 0);
   return 0;
}
