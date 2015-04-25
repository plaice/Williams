#include "par_partialsum.h"

int main (int argc, char* argv[])
{
    std::vector<int> input;
    parallel_partial_sum(input.begin(), input.end());
    return 0;
}
