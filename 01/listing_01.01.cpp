// Listing 1.1, p.13, Williams.
// A simple Hello, Concurrent World program.

#include <iostream>
#include <thread>

void hello()
{
    std::cout<<"Hello, Concurrent World\n";
}

int main()
{
    std::thread t(hello);
    t.join();
    return 0;
}
