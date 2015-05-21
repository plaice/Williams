// Listing 9.4, p.281, Williams.
// An implementation of run_pending_task().

#include <thread>

void thread_pool::run_pending_task()
{
    function_wrapper task;
    if(work_queue.try_pop(task))
    {
        task();
    }
    else
    {
        std::this_thread::yield();
    }
}
