// Listing 4.14, p.97, Williams.
// A sample implementation of spawn_task.

#include <thread>
#include <future>
#include <type_traits>

template<typename F,typename A>
std::future<typename std::result_of<F(A&&)>::type>
spawn_task(F&& f,A&& a)
{
    typedef typename std::result_of<F(A&&)>::type result_type;
    std::packaged_task<result_type(A&&)>
        task(std::move(f));
    std::future<result_type> res(task.get_future());
    std::thread t(std::move(task),std::move(a));
    t.detach();
    return res;
}
