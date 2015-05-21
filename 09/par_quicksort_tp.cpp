#include "par_quicksort_tp.h"

int main (int argc, char* argv[])
{
   std::list<int> input;
   std::list<int> output = parallel_quick_sort(input);
   return 0;
}
