#include "listing_04.09.h"

bool gui_shutdown_message_received()
{
    static int i = 100;
    if (--i)
        return false;
    return true;
}

void get_and_process_gui_message()
{
}

int main()
{
    return 0;
}
