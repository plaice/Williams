#include "par_accumulate_tp.h"

int main (int argc, char* argv[])
{
   std::vector<int> input;
   int result = parallel_accumulate(input.begin(), input.end(), 0);
   return 0;
}
