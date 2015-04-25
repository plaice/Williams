#include "par_foreach.h"

struct Int
{
    int i;
};

void incr(Int& element)
{
    ++element.i;
}

int main (int argc, char* argv[])
{
    std::vector<Int> input;
    parallel_for_each(input.begin(), input.end(), incr);
    return 0;
}
