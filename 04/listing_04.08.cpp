// Listing 4.8, p.79, Williams.
// Partial class definition for a specialization of std::packaged_task<>.

#include <future>
#include <vector>

namespace std
{

template<>
class packaged_task<std::string(std::vector<char>*,int)>
{
public:
    template<typename Callable>
    explicit packaged_task(Callable&& f);
    std::future<std::string> get_future();
    void operator()(std::vector<char>*,int);
};

}

int main()
{
    return 0;
}
