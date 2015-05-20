#include "listing_04.04.h"

data_chunk prepare_data()
{
    data_chunk chunk;
    return chunk;
}

bool more_data_to_prepare()
{
    static int i=100;
    if (--i)
        return true;
    return false;
}

void process(data_chunk chunk)
{
}

bool is_last_chunk(data_chunk)
{
    static int i=100;
    if (--i)
        return false;
    return true;
}

int main()
{
    return 0;
}
