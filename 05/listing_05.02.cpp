// Listing 5.2, p.120, Williams.
// Reading and writing variables from different threads.

#include <vector>
#include <atomic>
#include <iostream>
#include <chrono>
#include <thread>

std::vector<int> data;
std::atomic_bool data_ready(false);

void reader_thread()
{
    while(!data_ready.load())
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    std::cout<<"The answer="<<data[0]<<"\n";
}
void writer_thread()
{
    data.push_back(42);
    data_ready=true;
}

int main()
{
    std::thread reader(reader_thread);
    std::thread writer(writer_thread);
    reader.join();
    writer.join();
    return 0;
}
