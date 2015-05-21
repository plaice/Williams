// Listing 4.2, pp.71-72, Williams.
// std::queue interface.

#include <cstddef>
#include <deque>

template <class T, class Container = std::deque<T> >
class queue {
public:
    explicit queue(const Container&);
    explicit queue(Container&& = Container());
    queue(queue&& q);

    template <class Alloc> explicit queue(const Alloc&);
    template <class Alloc> queue(const Container&, const Alloc&);
    template <class Alloc> queue(Container&&, const Alloc&);
    template <class Alloc> queue(queue&&, const Alloc&);

    queue& operator=(queue&& q);
    void swap(queue&& q);

    bool empty() const;
    size_t size() const;

    T& front();
    const T& front() const;
    T& back();
    const T& back() const;

    void push(const T& x);
    void push(T&& x);
    void pop();
};

int main()
{
    return 0;
}
